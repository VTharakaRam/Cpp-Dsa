#include <iostream>
using namespace std;

int main(){

// ******************this is switch case statement*******************

int age;
cout<<"enter the age: ";
cin>>age;
  switch (age){
  	case 18:
  		cout<<"you are 18"<<endl;
  	    break;
  	    
  	case 45:
  		cout<<"you are 45"<<endl;
  	    break;
  	    
  	case 22:
  		cout<<"you are 22"<<endl;
  	    break;
  	
  	default:
  		cout<<"no option is selected"<<endl;
  		break;
  	
//  	the uses of using the break is,it stop the code there it self
  }
  
    int a,b;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    char op;
    cout<<"enter the character to perform"<<endl;
    cin>>op;
    
    switch (op) {
    	case '+':
    		cout<<a+b<<endl;
    		break;
    	
		case '-':
		    cout<<a-b<<endl;
		    break;	
		
		case '*':
		    cout<<a*b<<endl;
			break;    
    	
    	case '/':
    		cout<<a/b<<endl;
    		break;
    	
		case '%':
		    cout<<a%b<<endl;
			break;	
	}
	
//*****************************EXAMPLE*****************************
    cout<<"*********************EXAMPLE******************"<<endl;
	cout<<"QUES:GIVEN TOTAL AMOUNT 1330 NOW FIND HOW MANY 100,50,20,1 RUPEES ARE NEEDED "
	"[SOLVE IN SIMPLEST WAY]"<<endl;
	
	cout<<"TOTAL AMOUNT 1330"<<endl;
	int amt=1330;
	int note;
	switch (1){
		case 1:
			note=amt/100;
			amt-=note*100;
			cout<<"the number of 100 notes required are"<<note<<endl;
		
		case 2:
			note=amt/50;
			amt-=note*50;
			cout<<"the number of 50 notes required are "<<note<<endl;
		
		case 3:
			note=amt/20;
			amt-=note*20;
			cout<<"the number of 20 notes required are "<<note<<endl;
			
		case 4:
			note=amt/1;
			cout<<"the number of 1 notes required are "<<note<<endl;
			
			
	}
	
	
//**************************EXIT STATEMENT***********************
	
	int x,y;
	cout<<"enter the value of x"<<endl;
	cin>>x;
	
	cout<<"enter the value of y"<<endl;
	cin>>y;
	
	cout<<endl;
	cout<<x+y<<endl;
	cout<<x-y<<endl;
	cout<<x*y<<endl;
	exit(0);//from here the program comes out.
	cout<<x/y<<endl;
	cout<<x%y<<endl;
	
    
    
	
	return 0;
}
