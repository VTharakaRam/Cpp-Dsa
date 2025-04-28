#include <iostream>
using namespace std;

int large(int &x,int &y){
	return (x>y)? x:y;
}

void array(int *ar,int n,int start=0){
	for(int i=start;i<n;i++){
		cout<<ar[i]<<" ";
	}
}

void numb(int a,int b){
	cin>>a>>b;
	cout<<a<<b;
}


int main(){
	
	int a=34,b=23,c=20;
	
	numb(a,b);
	cout<<endl;
	//nested ternary operator
	int num=(a>b)?((a>c)?a:c):((b>c)?b:c);
	cout<<"maximum value is->"<<num<<endl;
	
	
	int x=10;
	int y=9;
	cout<<"largest->"<<large(x,y)<<endl;
	
	
	//default arguments
	int size;
	cin>>size;
	int *arr=new int[size];
	
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	array(arr,size,2);
	cout<<endl;
	array(arr,size);
	
	numb(a,b);
	
		
	return 0;
}
