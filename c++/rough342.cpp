#include <iostream>
#include <cmath>
using namespace std;


int main(){

    cout<<"hi"<<"\n";
	cout<<"bye"<<"\n";
	cout<<"heeee"<<"\n";
	int a=4;
	cout<<a++<<endl;
	int b=3;
	cout<<+
	b<<endl;
	cout<<++b<<endl;
	int h=4;	cout<<h<<endl;
	h=6;
	cout<<"the value is"<<h<<endl;
	
	
	int x=0;
	int w;
	for(int y=1;y<100;y++){
		x=x+1;
	w=x+y;
		cout<<w<<endl;
	}
	
	int m=7;
	while(m<6){
		cout<<"hi"<<endl;
		m++;
	} 
	int name[4]={45,34,87,65};
    cout<<name[2]<<endl;
   
   string fruits[3]={"grapes","mango","apple"};
   cout<<fruits[0]<<endl;
   cout<<fruits[1]<<endl;
   cout<<fruits[2]<<endl;
   
   
    
    int marks[4]={45,65,23,98};
    for(int i=0;i<4;i++){
		cout<<"the marks of "<<i <<" is "<< marks[i]<<endl;
	}
	
	
	
	int j=0;
	while(j<4){
		cout<<"the marks of "<<j<<" is "<<marks[j]<<endl;
		j++;
	}

	
    int k=0;
    do{
    	cout<<"the marks of "<< k <<" is "<<marks[k]<<endl;
    	k++;		
	}
	while(k<4);
	
	int* p=marks;
	
	cout<<"the value inside p is "<<*(p)<<endl;
	cout<<"the value inside p is "<<*(p+1)<<endl;
	cout<<"the value inside p is "<<*(p+2)<<endl;
	cout<<"the value inside p is "<<*(p+3)<<endl;
	
	cout<<"The address of "<<marks[0]<<" is "<<p<<endl;
	cout<<"The address of "<<marks[1]<<" is "<<++p<<endl;
	cout<<"The address of "<<marks[2]<<" is "<<++p<<endl;
	cout<<"The address of "<<marks[3]<<" is "<<++p<<endl;
	
	int score[4];
	for(int i=0;i<4;i++){
		cout<<"Enter the marks of student : "<<i+1<<endl;
		cin>>score[i];
	}
	
	for(int j=0;j<4;j++){
		cout<<"The marks of student"<<j+1<<" is "<<score[j]<<endl;
	}
	
	char atr[5]="ABC";
	cout<<atr;
	
	int d[4]={1,2,3,4};
	cout<<d[0];
	
	string value;
	for(int g=1;g<=9;g++){
		cout<<"Enter the value of"<<g<<" :";
		cin>>value;
		cout<<g<<" = "<<value<<endl;
	}
	
//****************check prime or not*********************    
    
    int n;
    cout<<"enter the to be checked:";
    cin>>n;
    for(int i=2;i<n;i++){
    	if(n%i==0){
    		cout<<"the number given is not prime"<<endl;
    		break;
		}
		else{
			cout<<"the number is prime"<<endl;
			break;
		}
	}
    if(n==2){
    	cout<<"the number is prime"<<endl;
	}
	
		    
	return 0;
}
