#include <iostream>
#include <cmath>
using namespace std;

int bits(int n){
	int ans=0;
	int i=0;
	while(n){
		int rem=n%2;
		ans=ans+(rem*pow(10,i));
		i++;
		n/=2;
	}
	cout<<ans;
//	while(ans){
//		int bit=ans&
//	}
	return ans;
}


int main (){
	
	bits(4);
	
	
	return 0;
}
