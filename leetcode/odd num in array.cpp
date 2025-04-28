#include <iostream>
using namespace std;

int ar_num(int ar[],int size){
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans*ar[i];
	}
	return ans;
}

int main(){
	
	
	int n;
	cout<<"enter the size:";
	cin>>n;
	int ar[100]={2,5,3,4,2,4,5};
	ar_num(ar,n);
	
	return 0;
}
