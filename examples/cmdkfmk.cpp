#include <iostream>
#include <cmath>
using namespace std;

int ftrl(int n){
	int fact=1;
	for(int i=n;i>0;i--){
		fact=fact*i;
	}
	//cout<<fact;
//	return fact;
}

int nCr(int n,int r){
	int num=ftrl(n);
	int deno=ftrl(n-r)*ftrl(r);
	int ans=num/deno;
	cout<<num/deno;
    return ans;
}

int main(){
	
	ftrl(5);
    nCr(4,3);
	return 0;
}
