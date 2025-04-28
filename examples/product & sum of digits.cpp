#include <iostream>
using namespace std;

void num(int n){
	int pro=1,sum=0;
	while(n!=0){
		int rem=n%10;
		n/=10;
		pro*=rem;
		sum+=rem;
	}
	cout<<pro<<endl;
	cout<<sum<<endl;
}


int main(){
	
    num(234);
	
	cout<<endl;
	
	int n;
	cin>>n;
	int pro=1;
	int sum=0;
	while(n){
		int rem=n%10;
		pro*=rem;
		sum+=rem;
		n/=10;
	}
	
	cout<<pro<<endl;
	cout<<sum<<endl;
	
	
	
	
	
	
	return 0;
}
