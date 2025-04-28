#include <iostream>
using namespace std;

int num(int n,int m){
	int a,b;
	for(int i=1;i<=n;i++){
		a=n/i;
	}
	for(int j=1;j<=n;j++){
		b=n/j;
	}
	if(a==b){
		cout<<"The LCM of "<<n<<" & "<<m<<" is "<<a;
	}
}

int main(){
	
	num(3,15);
	
	return 0;
}
