#include <iostream>
using namespace std;

bool isSorted(int *ar,int n){
	if(n==0 || n==1){
		return 1;
	}
	if(ar[0]>ar[1]){
		return false;
	}
	else{
		bool remaining=isSorted(ar+1,n-1);
		return remaining;
	}
	
}

int main(){
	
	int n;
	cin>>n;
	int b[10]={1,3,5,1,9};
	
	cout<<isSorted(b,n);
	
	
		
}
