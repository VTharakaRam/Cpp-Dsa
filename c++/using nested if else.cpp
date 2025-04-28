#include <iostream>
using namespace std;

int main()
{
	int a=7;
	int b=2;
	if(a>b){
		cout<<"a is greater"<<endl;
		if(a%2==0){
			cout<<"a is even"<<endl;
		}
		else{
			cout<<"a is odd"<<endl;
		}
	}
	else if(a==b){
		cout<<"both are equal"<<endl;
	}
	else{
		cout<<"b is greater"<<endl;
	}
	return 0;
}
