#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
//**************BINARY TO DECIMAL USING ARRAYS*****************************************
	cout<<"************BINARY TO DECIMAL USING ARRAYS**************"<<endl;
	int bin[5]={1,1,1,0,1};
	int size=sizeof(bin)/sizeof(int);
	int ans=0,bit;
	for(int i=0;i<size;i++){
		bit=bin[size-i-1]&1;
		if(bit==1){
			ans=ans+pow(2,i);
		}
	}
	cout<<ans<<endl;
	cout<<endl;
	
	
//***********PRINTING SAME NUMBER***************************************************	
	cout<<"*************PRINTING SAME NUMBER*******************"<<endl;
	int num[3]={1,2,3};
	int len=sizeof(num)/sizeof(int);
	int val=0;
	for(int i=0;i<len;i++){
		val=val+(num[len-i-1]*pow(10,i));
	}
	cout<<val<<endl;	
	
	
	
//**************************DECIMAL TO BINARY USING ARRAYS***********
    cout<<"************DECIMAL TO BINARY USING ARRAYS***********"<<endl;
	int  n;
	cin>>n;
	int rem,res=0;
	while(n!=0){
//power should be upto the number, such that just the square completes.		
		for(int i=0;i<pow(2,5);i++){
			rem=n%2;
			n/=2;
			res=(rem*pow(10,i))+res;
		}
	}
	cout<<res<<endl;
	cout<<endl;
	
		
//*************************DECIMAL TO BINARY USING LOOP*************************
    cout<<"*****************DECIMAL TO BINARY USING LOOP*******"<<endl;
	int m;
	cout<<"enter the value of m:"<<endl;
	cin>>m;
	int score=0;
	int i=0;
	while(m!=0){
		int rem=m%2;
		score=(rem*pow(10,i))+score;
		i++;
		m/=2;		
	}
	cout<<score<<endl;
	cout<<endl;	
	
	
	
	
//*************************DECIMAL TO BINARY USING LOOP*************************
    cout<<"*****************DECIMAL TO BINARY USING LOOP*******"<<endl;
	int a;
	cout<<"enter the value of a:"<<endl;
	cin>>a;
	int sco=0;
	int z=0;
	while(a){
		int rem=m&1;
		sco=(rem*pow(10,z))+score;
		z++;
		a>>=1;		
	}
	cout<<sco<<endl;
	cout<<endl;	
	
	
	
//*************************BINARY TO DECIMAL USING LOOP*************************
    cout<<"*****************BINARY TO DECIMAL USING LOOP*******"<<endl;	
    int r;
    cin>>r;
    int j=0;
    int result=0;
    while(r){
    	int digit=r&1;
    	if(digit==1){
    		result+=pow(2,j);
		}
		r/=10;
    	j++;
	}
	cout<<result<<endl;
	
	
		
	return 0;
}
