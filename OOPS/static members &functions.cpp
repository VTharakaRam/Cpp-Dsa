#include <iostream>
using namespace std;

class box{
	public:
	static int len;
	static int brd;
	static int hgt;
	
	public:
		static int fun(){
			return len+10;
		}
		
		static void print()  {  
        	cout << "The value of the length is: " << len << endl;  
        	cout << "The value of the breadth is: " << brd << endl;  
        	cout << "The value of the height is: " << hgt << endl;  
    	}
};

int box::len=45;
int box::brd=12;
int box::hgt=23;

int main(){
	
	cout<<box::len<<endl;
	cout <<"Static member function is called through Class name: "<< endl;  
    box::print();
	cout<<endl;  
	
	cout<<"length after +10 is ->"<<box::fun()<<endl;
	
	
}
