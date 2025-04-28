#include <iostream>
#include <math.h>
using namespace std;

void number(int n){
	int ans=0;
	int i=0;
	while(n>0){
	    int rem=n%10;
	    ans=(pow(10,i)*rem)+ans;
	    n/=10;
	    i++;
	}
	cout<<"the number given is: "<<ans<<endl;
}

void reverse(int n){
	int ans=0;
	while(n>0){
		int rem=n%10;
		ans*=10;
		ans+=rem;
		n/=10;
	}
	cout<<"the reverse value is: "<<ans<<endl;
}

int main(){
	
	number(321);
	number(4833);
	
	reverse(321);
	reverse(473874);
	
	
	return 0;
}
