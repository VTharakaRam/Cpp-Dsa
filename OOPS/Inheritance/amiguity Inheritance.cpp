#include <iostream>
using namespace std;

class father{
	public:
	int age;
	
	public:
		void speak(){
			cout<<"father speaking"<<endl;
		}
};

class mother{
	public:
	int wgt;
	
	public:
		void speak(){
			cout<<"mother speaking"<<endl;
		}
};

class child:public father,public mother{
	
};


int main(){
	
	
	child d;
	d.speak();
	d.age=45;
	cout<<d.age<<endl;  
	d.mother::speak();
	d.wgt=70;
	cout<<d.wgt<<endl;  
	
	
}
