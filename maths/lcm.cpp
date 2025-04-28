#include <iostream>
using namespace std;

int lcm(int a,int b){
	int num=a*b;
	if(a==0){
		return a;
	}
	else if(b==0){
		return b;
	}
	else{
		while(a!=b){
			if(a>b){
				a-=b;
			}
			else{
				b-=a;
			}
		}
	}
	int lcm=num/a;
	return lcm;
}

int main(){
	
	int a,b;
	cout<<"entr the value:";
	cin>>a;
	cout<<"entr the value:";
	cin>>b;
	
	cout<<"lcm->"<<lcm(a,b)<<endl;
	
	
	return 0;
}
