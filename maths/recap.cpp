#include <iostream>
using namespace std;


bool isprime(int n){
	int i=2;
	if(n<=1){
		return 0;
	}
	while(i<n){
		if(n%i==0){
			return 0;
			break;
		}
		i++;
	}
	return 1;
}

int main(){
	
	
	int n;
	cout<<"enter the value"<<endl;
	cin>>n;
	
	if(isprime(n)){
		cout<<"prime "<<endl;
	}
	else{
		cout<<"not prime"<<endl;
	}
	
	
	
	return 0;
}
