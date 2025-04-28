#include <iostream>
using namespace std;

//AREA OF SQUARE
void area(int a){
	cout<<a*a<<endl;
}

//AREA OF CIRCLE
void area(float a){
	cout<<3.14*a<<endl;
}

//AREA OF RECTANGLE
void area(float l,int b){
	cout<<l*b<<endl;
}


int main(){
	
		
	area(3,4);
	area(10);
	area(float(10));
	
	
	return 0;
}
