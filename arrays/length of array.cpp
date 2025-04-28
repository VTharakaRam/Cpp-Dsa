#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int lenarr(char ar[]){
	int length;
	for(int i=0;ar[i]!='\0';i++){
			length++;
	}
	return length;
}

void reve(char ar[],int n){
	int s=0;
	int e=n-1;
	while(s<=e){
		swap(ar[s],ar[e]);
		s++,e--;
	}
}

int main(){
	
	char a[20];
	cin>>a;
	
	
	cout<<"your name is "<<a<<endl;
	
	int s=lenarr(a);
	cout<<"length of array a is "<<s<<endl;
	
	reve(a,s);
	
	cout<<"reverse of array is "<<a<<endl;
	
	return 0;
}
