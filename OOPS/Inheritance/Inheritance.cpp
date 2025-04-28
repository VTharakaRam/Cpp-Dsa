#include <iostream>
using namespace std;

class human{
	public:
	int age;
	int hgt;
	int wh;
	
	public:
		void setAge(int age){
			this->age=age;
		}
		
		void getAge(){
			cout<<"Age is->"<<age<<endl;
		}
};

class male:protected human{
	public:
	string color;
	
	public:
		void sleep(){
			cout<<"male sleeping"<<endl;
		}
		void setHeight(int height){
			cout<<"this is derived class"<<endl;
			this->hgt=height;
		}
		
		void getHeight(){
			cout<<"Height is->"<<hgt<<endl;
		}
};


int main(){
	
	male m;
	int age=23;
	int h=165;
	
	m.setHeight(h);
	m.getHeight();
	//m.age;
//	m.sleep();
//	m.setAge(age);
//	m.getAge();
//	cout<<"age of male->"<<m.age<<endl;
	
	
}
