#include <iostream>
using namespace std;

class animal{
	public:
		void fun(){
			cout<<"animal is speaking"<<endl;
		}
};

class dog:public animal{
	public:
		void fun(){
			cout<<"dog is barking"<<endl;
		}
};


int main(){
	
	dog d;
	d.fun();
	
	
	
	return 0;
}
