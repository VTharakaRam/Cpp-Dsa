#include <iostream>
#include <cmath>
using namespace std;

void nums(int n,int r){
	int ans=1;
	for(int i=n;i>0;i--){
		ans*=n;
		n--;
	}

	int res=1;
	for(int i=r;i>0;i--){
		res=res*r;
		r--;
	}
	
	int val=1;
	int a=n-r;
	for(int i=a;i>0;i--){
		val*=a;
		a--;
	}


//cout<<ans<<endl;
	cout<<val<<endl;//<<res<<endl;
//	cout<<ans/(val*res)<<endl;
}



int main(){
	
	nums(6,3);
	
	return 0;
}
