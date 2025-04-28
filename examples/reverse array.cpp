#include <iostream>
using namespace std;

void reve(int ar[],int size){
	int swap;
	for(int i=0;i<size/2;i++){
		swap=ar[i];
		ar[i]=ar[size-i-1];
		ar[size-i-1]=swap;
	}
}

int main(){
	
	int num[5]={2,6,3,9,10};
	reve(num,5);
	for(int i=0;i<5;i++){
		cout<<num[i]<<" ";
	}
	cout<<endl;
	
	int num1[6]={4,6,8,10,12,14};
	reve(num1,6);
	for(int i=0;i<6;i++){
		cout<<num1[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
