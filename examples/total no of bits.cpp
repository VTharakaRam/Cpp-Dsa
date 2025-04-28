#include <iostream>
#include <cmath>
using namespace std;

int bit(int a){
	int count=0;
	int h=a&1;
	if(h==1){
		count++;
	}
	a=a>>1;
	return count;
}

int num(int n,int m){
	int ans=bit(n);
	int res=bit(m);
	int sco=ans+res;
	return sco;
}

int main (){
	
	int a,b;
	cout<<"enter the value:"<<endl;
	cin>>a;
	cout<<"enter the value:"<<endl;
	cin>>b;
	cout<<"total number of bits are:"<<num(a,b)<<endl;
	
	return 0;
}
