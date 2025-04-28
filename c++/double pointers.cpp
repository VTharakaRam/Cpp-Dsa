#include <iostream>
using namespace std;



int main(){
	
	int i=5;
	int *p=&i;
	int **t=&p;
	
	//value of i
	cout<<i<<endl;
	cout<<*p<<endl;
	cout<<**t<<endl;
	
	//address of i
	cout<<&i<<endl;
	cout<<p<<endl;
	cout<<*t<<endl;
	
	//address of p
	cout<<&p<<endl;
	cout<<t<<endl;
	
	//address of t
	cout<<&t<<endl;
	
	int a=10;
	int b=3;
	
	int *e=&b;
	*e=2;
	cout<<"a->"<<a<<endl<<"b->"<<b<<endl;
	
	int *n=&a;
	cout<<(*n)++<<endl;
	cout<<a<<endl;
	
	
}
