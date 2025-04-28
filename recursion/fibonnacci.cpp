#include <iostream>
using namespace std;

int fib(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	return fib(n-1)+fib(n-2);
}


int main(){
	
	int a=0;
	int b=1;
	int c=8;
	cout<<"printing fibonnacci numbers:"<<endl;
	cout<<fib(3)<<endl;
	
	
}
