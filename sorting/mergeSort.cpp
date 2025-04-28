#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &v,int s,int e){
	for(int i=s;i<=e;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

void merge1(vector<int> &v,int s,int e){
	int mid=s+(e-s)/2;
	int len1=mid-s+1;
	int len2=e-mid;
	
	int *first=new int[len1];
	int *second=new int[len2];
	
	//copy values
	int l=s;
	for(int i=0;i<len1;i++){
		first[i]=v[l++];
	}
	
	int k=mid+1;
	for(int i=0;i<len2;i++){
		second[i]=v[k++];
	}
	
	//merge kardo
	
	int index1=0;
	int index2=0;
	int mainindex=s;
	while(index1<len1 && index2<len2){
		if(first[index1]<second[index2]){
			v[mainindex++]=first[index1++];
		}
		else{
			v[mainindex++]=second[index2++];
		}
	}
	
	while(index1<len1){
		v[mainindex++]=first[index1++];
	}
	while(index2<len2){
		v[mainindex++]=second[index2++];
	}
	delete []first;
	delete []second;
}

void mergesort1(vector<int> &v,int s,int e){
	//base case
	if(s>=e){
		return;
	}
	
	int mid=s+(e-s)/2;
	
	//left wala part
	cout<<"left wala->";
	print(v,s,mid);
	mergesort1(v,s,mid);
	
	//right wala part
	cout<<"right wala->";
	print(v,mid+1,e);
	mergesort1(v,mid+1,e);
	
	cout<<"merge karde"<<endl;
	//merge karde
	merge1(v,s,e);
	
}



int main(){
	
	vector<int> v={2,5,1,9,4,3};
	
	int n=v.size();
	
	print(v,0,n-1);
	
	mergesort1(v,0,n-1);
	
	print(v,0,n-1);
	
	
}
