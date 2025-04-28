#include <iostream>
using namespace std;

class car{
	
	public:
		string color;
	public:
		void printcolor(){
			cout<<color<<endl;
		}
		void setcolor(string a){
			color = a;
		}
};


int main(){
	
	
	car car1;
	car1.color="blue";
	cout<<car1.color<<endl;
	car1.color="green";
	cout<<car1.color<<endl;
	
	
	car car2;
	car2.setcolor("yellow");
	car2.printcolor();	
	
	
	return 0;
}
