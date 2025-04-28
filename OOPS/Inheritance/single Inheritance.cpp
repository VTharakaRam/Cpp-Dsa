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


int main(){
	
	
	dog d;
	d.speak();
	cout<<d.age<<endl;  //garbage value
	
	
}
