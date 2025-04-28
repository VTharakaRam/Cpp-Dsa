#include <iostream>
using namespace std;

void tellhello(string a){
	cout<<"hello world"<<" "<<a<<endl;
}

int add(int a,int b){
	int c =a+b;
	return c;
}

int sum(int m,int n){
	int k=m+n;
	return k;
}

int main(){
	
	string b;
	cout<<"Enter the value of b:"<<endl;
	cin>>b;
	tellhello(b);
	tellhello("santhi");
	
	int k=add(3,3);
	int j=add(5,8);
	int f=add(1,3);
	cout<<k<<endl<<j<<endl<<f<<endl; 
	
	
	int num1,num2;
	cout<<"enter the value of num1:"<<endl;
	cin>>num1; 
	cout<<"enter the value of num2:"<<endl;
	cin>>num2;
	cout<<"the sum of num1 and num2 is:"<<sum(num1,num2)<<endl;
	
	
	//dynamic memory created
	int *q=new int;
	cin>>*q;
	
	int *e=new int;
	cin>>*e;
	
	cout<<sum(*e,*q)<<endl;
	
	return 0;
}
}
