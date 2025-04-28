#include <iostream>
using namespace std;

class complex{
	public:
	int x,y;
	public:
		complex(int x=0,int y=0){
			this->x=x;
			this->y=y;
		}
		
		complex operator+(complex& b){
			//cout<<"hi"<<endl;
			complex c;
			c.x=this->x+b.x;
			c.y=this->y+b.y;
			return c;
		}
		void print(){
			cout<<this->x<<"+"<<this->y<<"i"<<endl;
		}
		
		void operator() (){
			cout<<"bracket is overloaded"<<endl;
		}
};


int main(){
	
	complex a(10,6),b(5,8);
	
	complex c=a+b;
	c.print();
	
	a();
	
	
}
