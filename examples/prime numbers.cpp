#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter the number :";
	cin>>n;
	bool isprime=1;
	for(int i=2;i<n;i++){
		if(n%i==0){
			isprime=0;
			break;
		}
	}
	if(isprime==0){
		cout<<"the number is not prime number"<<endl;
	}
	else{
		cout<<"the number is prime number"<<endl;
	}
	
	for(int m=0;m<5;m++){
		for(int m=m;m<=5;m++){
			cout<<m<<" "<<m<<endl;
		}
	}
	

	return 0;
}
