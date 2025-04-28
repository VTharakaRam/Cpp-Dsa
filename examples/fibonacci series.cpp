#include <iostream>
#include <cmath>
using namespace std;


void binary(int n){
	int ans,bit,i=0;
	while(n>0){
		bit=n&1;
		if(bit==1){
			ans=ans+pow(2,i);
		}
		i++;
		n=n>>1;
	}
	cout<<ans<<endl;
}



	
int main(){
	
	int n;
	cout<<"print upto:";
	cin>>n;
	int a=0;
	int b=1;
	for(int i=1;i<=n;i++){
		cout<<a<<" ";
		int c=a+b;
		a=b;
		b=c;
	}
	
	binary(101);
	cout<<"hgjkdg";
	
	return 0;
}
