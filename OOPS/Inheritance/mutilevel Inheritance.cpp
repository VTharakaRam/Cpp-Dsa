#include <iostream>
using namespace std;

class animal{
	public:
	int age;
	int wgt;
	
	public:
		void speak(){
			cout<<"speaking"<<endl;
		}
};

class dog:public animal{
	
};

class GermanSheperd:public dog{
	
};


int main(){
	
	
	dog d;
	d.speak();
	cout<<d.age<<endl;  //garbage value
	
	
	GermanSheperd g;
	g.speak();
	cout<<g.wgt<<endl;//garbage value
	
	
}
