#include <iostream>
using namespace std;

//FUNCTION PROTOTYPE
// type function-name (arguments)

int sum(int,int);
void g(string a);

int main(){
	
	int num1,num2;
	cout<<"enter the value of num1:"<<endl;
	cin>>num1; 
	cout<<"enter the value of num2:"<<endl;
	cin>>num2;
	cout<<"the sum of num1 and num2 is:"<<sum(num1,num2)<<endl;
	string b;
	cout<<"enter the string"<<endl;
	cin>>b;
 	cout<<"the value is "<<string(b)<<endl;
    
	return 0;
}


int sum(int a,int b){
	int c;
	c=a+b;
	return a;
}

void g(string a){
}
