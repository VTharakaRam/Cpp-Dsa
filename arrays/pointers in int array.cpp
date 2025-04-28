#include <iostream>
using namespace std;


int main(){
	
	int a[9]={1,2,4,6,3,7,5,8,1};
	
	int *p=&a[0];
	
	cout<<"adderss at->0 is "<<a<<endl;
	cout<<"adderss at->4 is "<<&a[4]<<endl;
	cout<<"adderss at->4 is "<<a+4<<endl;
	cout<<"value at->4 is "<<*(a+4)<<endl;
	cout<<"value at->4 is "<<a[4]<<endl;

	cout<<endl;
	cout<<1[a]<<endl;
	cout<<endl;
	
	cout<<"**********SIZES******"<<endl;
	
	cout<<"size->"<<sizeof(a)<<endl;
	cout<<"size->"<<sizeof(&a)<<endl;
	cout<<"size->"<<sizeof(p)<<endl;
	cout<<"size->"<<sizeof(*p)<<endl;
	cout<<"size->"<<sizeof(&p)<<endl;
	cout<<endl;
	//ERROR
	  //a=a+1;
	
	cout<<p<<endl;
	cout<<*p<<endl;
	p=p+1;
	cout<<p<<endl;
	cout<<*p<<endl;
	  
	
}
