#include <bits/stdc++.h>
using namespace std;

void heapify(int a[],int n,int i){
	int large=i;
	int l=2*i+1;
	int r=2*i+2;
	
	if(l<n && a[l]>a[large]){
		large=l;
	}
	if(r<n && a[r]>a[large]){
		large=r;
	}
	if(large!=i){
		swap(a[i],a[large]);
		heapify(a,n,large);
	}
}

void heapsort(int a[],int n){
	for(int i=n/2-1;i>=0;i--){
		heapify(a,n,i);
	}
	
	for(int i=n-1;i>=0;i--){
		swap(a[0],a[i]);
		heapify(a,i,0);
	}
}

void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}


int main(){
	
	int a[6]={60,20,40,70,30,10};
	
	int n=6;
	
	for(int i=n/2-1;i>=0;i--){
		heapify(a,n,i);
	}
	
	cout<<"before heapfy"<<endl;
	print(a,n);
	
	heapsort(a,n);
	cout<<"after heapfy"<<endl;
	print(a,n);
	
	
}
