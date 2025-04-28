#include <iostream>
using namespace std;


void array(int ar[],int size){
	for(int i=0;i<size;i++){
		int temp;
		if(i%2==0){
			swap(ar[i],ar[i+1]);
//			temp=ar[i];
//		    ar[i]=ar[i+1];
//		    ar[i+1]=temp;
		}
	}
}

void display(int ar[],int size){
	for(int i=0;i<size;i++){
		cout<<ar[i];
	}
	cout<<endl;
}

int main(){
	
	int n;
	cout<<"enter the size:";
	cin>>n;
	int ar[100]={1,2,3,4,5}; 
    display(ar,n);
	array(ar,n);
	display(ar,n);
	
	int m;
	cout<<"enter the size:";
	cin>>m;
	int num[100]={5,3,7,1,9,7};
	display(ar,m);
	array(ar,m);
	display(ar,m);
	
	return 0;
}
