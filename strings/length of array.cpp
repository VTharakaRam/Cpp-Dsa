#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int lenarr(char ar[]){
	int length=0;
	for(int i=0;ar[i]!='\0';i++){
			length++;
	}
	return length;
}

void reve(char ar[],int n){
	int s=0,e=n-1;
	while(s<e){
		swap(ar[s],ar[e]);
		s++,e--;
	}
}

void arra(char ar[],int n){
	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}
}

int main(){
	
	char a[20];
	cout<<"enter your name:";
	cin>>a;
	
	
	cout<<"your name is "<<a<<endl;
	
	int size=lenarr(a);
	cout<<"length of array a is "<<size<<endl;
	
	reve(a,size);
	cout<<"reverse of string is:"<<a;
	//arra(a,size);
	
	
	return 0;
}
