#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	bool rain;
	cout<<"IS THERE IS RAINING OUTSIDE"<<endl;
	cin>>rain;
	if(rain==1){
		cout<<"you cannot go to cinema"<<endl;
	}
	else{
	cout<<"you can go cinema"<<endl;
	}
	
	cout<<"FOR AND WHILE LOOPS"<<endl;
	
	cout<<"FOR: all the code is written in the bracket it self"<<endl<<"WHILE: only the condition is written in the bracket"<<endl;
	
	for(int i=18;i>9;i--){
		cout<<i<<endl;
	}
	
	int j=4;
	while(j<10){
		cout<<j<<endl;
		j++;
	}
	
	for(int k=2;k<9;k++){
		cout<<k<<"  ";
	}
	
	
	int a=8;
	do{
		cout<<a<<endl;
		a++;
	}
	while(a>17);
	
	int b=8;
	do{
		cout<<b<<endl;
		b++;
	}
	while(b<17);
	
	for(int c=1;c<11;c++){
		cout<<"2 x"<<c<<" = "<<2*c<<endl;
	}
	cout <<"powers" << endl;
	int x=2;
	int n=1; 
	while(n<11){
		cout<<"2^"<< n << "=" <<pow(x,n)<<endl;
		n++;
	}
	
	
}
	
