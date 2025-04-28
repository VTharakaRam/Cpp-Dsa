#include <iostream>
#include <cmath>
using namespace std;

void num(int n){
	int a=0;
	int b=1;
	for(int i=1;i<=n;i++){
		cout<<a<<" ";
		int c=a+b;
		a=b;
		b=c;
	}
	cout<<a<<endl;
}

int main(){
	num(5);
	
	
	return 0;
}
