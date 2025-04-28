#include <iostream>
using namespace std;

int c=45;

int main(){
	int a=5;
	int b=10;
    int c;
	
	c=a+b;
	cout<<c<<endl;
	cout<<"global of c is "<<::c<<endl;
    cout<<endl;
	
	c=a*b;
	cout<<c<<endl;
	cout<<"global of c is "<<::c<<endl;
//	cout<<sizeof(1)<<endl;  
	 cout<<endl;
	
	c=b/a;
	cout<<c<<endl;
	cout<<"global of c is "<<::c<<endl;
	 cout<<endl;
	
	c=a%b;
	cout<<c<<endl;
	cout<<"global of c is "<<::c<<endl;
	

	
	return 0;
}
