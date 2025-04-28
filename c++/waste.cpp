#include <iostream>
#include <cmath>

using namespace std;
int main(){
	
	cout<<"size of the char"<<endl;
	int a=12;
	float b=5.7;
	char c='V';
	string d="Tharak Ram";
	
	cout <<a<<", "<<b<< ", "<< c<<" "<<d<<endl;
	
	float sum=a+b;
	cout<<"sum of a and b "<<sum<<endl;
	
	int m=50;
	int n=20;
	
	cout<<m+n<<endl;
	cout <<m-n<<endl;
	cout <<m*n<<endl;
	cout <<m/n<<endl;
	cout<<m%n<<endl;
	cout <<pow(m,n)<<endl;
	
	m+=1;
	cout <<m<<endl;
	m-=34;
	cout<<m<<endl;
	m*=2;
	cout<<m<<endl;
	m+=1;
	cout<<m<<endl;
	cout<<((m>n)||(m<n))<<endl;
	
	bool rain;
	cout<<"Is it raining outside?"<<" ";
	cin>>rain;
	cout<<"yaaaa"<<" "<<rain<<endl;
	
	if (m>n){
		cout<<"m is greater "<<endl;
	}
    else if(m==n){
	    cout<<"both are equal"<<endl;
	}
    else{
	    cout<<"m is smaller "<<endl;
	}
	
	cout<<(m<n)<<endl;
	cout<<((m>n)||(m<n))<<endl;
	
	int h,j;
	cin>>h>>j;
	if(h>j){
		cout<<"h is greater than j"<<endl;
		if(h%2==0){
			cout<<"h is an even number"<<endl;
		}
		else{
			cout<<"h is odd number"<<endl;
		}
	}
	else if(h==j){
		cout<<"both are equal"<<endl;
	}
	else{
		cout<<"j is greater than h"<<endl;
	}
	
	for(int m=20;m>10;m--){
		cout<<m<<endl;
	}
	
    
    
	return 0;
}
