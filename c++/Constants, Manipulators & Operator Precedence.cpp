#include <iostream>
#include <iomanip>
using namespace std;

int main(){
//*************************Constants in C++************************

	int a=34;
	cout <<"the value of a is "<<a<<endl;
	
	a=45;
	cout <<"the value a is "<<a<<endl;
	
//	as we see above that same a has printing different values
//  to avoid this we use constant(const) term 

    const int b=54;
    cout <<"the value of b is "<<b<<endl;
    
//  b=56;
    cout <<"the value of b is "<<b<<endl;
//  as we had typed const term,so it gets error
    cout<<endl;

// **********Manipulators in C++****************
//  for using this operator we have to include a header file <iomanip>
//  this operator is used to set the output at variable places

    int x=20,y=345,z=45678;
    cout<<"the value of x without setw is:"<<x<<endl;
    cout<<"the value of y without setw is:"<<y<<endl;
    cout<<"the value of z without setw is:"<<z<<endl;
    
    cout<<"the value of x with setw is:"<<setw(4)<<x<<endl;
    cout<<"the value of y with setw is:"<<setw(4)<<y<<endl;
    cout<<"the value of z with setw is:"<<setw(4)<<z<<endl; 
    
    cout<<"the value of x with setw is:"<<setw(6)<<x<<endl;
    cout<<"the value of y with setw is:"<<setw(6)<<y<<endl;
    cout<<"the value of z with setw is:"<<setw(6)<<z<<endl;
    cout<<endl;
    
    
//    **************Operator Precedence**************
    int m=4,n=5;
    int o;
    o=((((m*5)+n)-45)+60);
    cout<<"the value of o is "<<o<<endl;
    

	return 0;
}
