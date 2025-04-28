#include <iostream>
using namespace std;

class father{
	public:
	int age;
	
	public:
		void speak1(){
			cout<<"father speaking"<<endl;
		}
};

class mother{
	public:
	int wgt;
	
	public:
		void speak2(){
			cout<<"mother speaking"<<endl;
		}
};

class child:public father,public mother{
	
};


int main(){
	
	
	child d;
	d.speak1();
	d.age=45;
	cout<<d.age<<endl;  
	d.speak2();
	d.wgt=70;
	cout<<d.wgt<<endl;  
	
	
}
