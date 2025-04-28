#include <iostream>
#include <vector>
using namespace std;

bool linearsrh1(int *ar,int n,int k){
	if(n==0){
		return 0;
	}
	if(ar[0]==k){
		return 1;
	}
	else{
		return linearsrh1(ar+1,n-1,k);
	}
}

bool linearsrh2(vector<int> &ar,int n,int k){
	if(n<0){
		return 0;
	}
	if(ar[n-1]==k){
		return 1;
	}
	else{
		return linearsrh2(ar,n-1,k);
	}
}

bool binsrh(int *ar,int s,int e,int k){
	if(s>e){
		return 0;
	}
	int mid=s+e/2;
	if(ar[mid]==k){
		return 1;
	}
	else if(ar[mid]<k){
		binsrh(ar,s=mid+1,e,k);
	}
	else{
		binsrh(ar,s,mid-1,k);
	}
}


int main(){
	
	int k;
	cin>>k;
	int a[20]={1,3,4,7,8,10};
	
	vector<int> ar={1,3,4,7,8,10};

//**********************using array***********************************
	cout<<"using array->"<<endl;
	if(linearsrh1(a,6,k)){
		cout<<"element is present"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}
	
	
//**********************using vector***********************************	
	cout<<"using vector->"<<endl;
	if(linearsrh2(ar,6,k)){
		cout<<"element is present"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}
	
	cout<<endl;
	cout<<"using binarysearch"<<endl;
	if(binsrh(a,0,5,k)){
		cout<<"element is present"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}
	
	
	char m=98;
	cout<<m;
	int q=3;
	cout<<char(m+q)<<endl;
	
	
}
