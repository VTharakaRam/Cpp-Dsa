#include <iostream>
using namespace std;

int hcf(int a,int b){
	if(a==0){
		return b;
	}
	else if(b==0){
		return a;
	}
	else{
		while(a!=b){
			if(a>b){
				a=a-b;
			}
			else{
				b=b-a;
			}
		}
	}
	return a;
}


int main(){
	
	
	int a,b;
	cout<<"enter the value:";
	cin>>a;
	cout<<"enter the value:";
	cin>>b;
	
	cout<<"hcf is:"<<hcf(a,b)<<endl;
	
	return 0;
}
