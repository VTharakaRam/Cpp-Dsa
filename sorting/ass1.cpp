#include <bits/stdc++.h>
using namespace std;

struct stud{
	int roll_no;
	string name;
	float cgpa;
	
};

void display(stud *s[],int n){
	for(int i=0;i<n;i++){
		cout<<"printing the data of student->"<<i+1<<endl;
		cout<<s[i]->roll_no<<"->>"<<s[i]->name<<"->>"<<s[i]->cgpa<<endl;
	}
}

void bubble(stud *s[],int n){
	for(int i=0;i<n-1;i++){
		bool swapped=false;
		for(int j=0;j<n-i-1;j++){
			if(s[j]->roll_no > s[j+1]->roll_no){
				swap(s[j]->roll_no,s[j+1]->roll_no);
				swapped=true;
			}
		}
		if(swapped==false){
			break;
		}
	}
}

void display_r(stud *s[],int n){
	cout<<"roll_numbers->"<<endl;
	for(int i=0;i<n;i++){
		cout<<s[i]->roll_no<<" ";
	}
	cout<<endl;
}

int partition(stud* s[],int start,int n){
	int pivot=s[start]->cgpa;
	
	int cnt=0;
	for(int i=start;i<n;i++){
		if(pivot > s[i]->cgpa){
			cnt++;
		}
	}
	
	int mainIndex=start+cnt;
	swap(s[start]->cgpa,s[mainIndex]->cgpa);
	
	int i=0;int e=n;
	while(i<mainIndex && e>mainIndex){
		while(s[i]->cgpa < pivot){
			i++;
		}
		while(s[i]->cgpa < pivot){
			e--;
		}
		
		if(i<mainIndex && e>mainIndex){
			swap(s[i]->cgpa,s[e]->cgpa);
			i++;e--;
		}
	}
	
	return mainIndex;
}

void quick(stud *s[],int start,int n){
	if(start>=n){
		return ;
	}
	
	int p=partition(s,start,n);
	
	quick(s,start,p-1);
	quick(s,p+1,n);
}

void display_c(stud *s[],int n){
	cout<<"cgpa->"<<endl;
	for(int i=0;i<n;i++){
		cout<<s[i]->cgpa<<" ";
	}
	cout<<endl;
}


int main(){
	
	int n;
	cout<<"no.of inputs->";
	cin>>n;
	stud *s[n];
	
	for(int i=0;i<n;i++){
		cout<<"enter the data of student "<<i+1<<endl;
		s[i]=new stud;
		cout<<"enter the roll_no->";
		cin>>s[i]->roll_no;
		
		cout<<"enter the name->";
		cin>>s[i]->name;
		
		cout<<"enter the cgpa->";
		cin>>s[i]->cgpa;
	}
	
	
	display(s,n);
	
	bubble(s,n);
	display_r(s,n);
	
	quick(s,0,n);
	display_c(s,n);
	
}
