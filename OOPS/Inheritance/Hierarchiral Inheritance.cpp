#include <iostream>
using namespace std;

class G{
	public:
	int age;
	int wgt;
	
	public:
		void speakG(){
			cout<<"this is class G"<<endl;
		}
};

class B:public G{
	public:
		void speakB(){
			cout<<"this is class B"<<endl;
		}
};

class E:public G{
	public:
		void speakE(){
			cout<<"this is class E"<<endl;
		}
};

class A:public B{
	public:
		void speakA(){
			cout<<"this is class A"<<endl;
		}
};

class C:public B{
	public:
		void speakC(){
			cout<<"this is class C"<<endl;
		}	
};

class D:public E{
	public:
		void speakD(){
			cout<<"this is class D"<<endl;
		}
};

class F:public E{
	public:
		void speakF(){
			cout<<"this is class F"<<endl;
		}
};


int main(){
	
	
	F f;
	f.speakF();
	cout<<f.age<<endl;
	f.speakE();  //garbage value
	
	
}
