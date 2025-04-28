#include <iostream>
#include <cmath>
using namespace std;

//void print(){
//	cout<<print 0;
//}
//
//void print (){
//	cout<<print 1;
//}

//area of square
void area(int a){
	int area =a*a;
	cout<<"AREA OF SQUARE  "<<area<<endl;
}

//area of cricle
void area(float r){
	float area =3.14*r;
	cout<<"AREA OF circle  "<<area<<endl;
}

//area of rectangle
void area(int l,int b){
	int area = l*b;
    cout<<"AREA OF RECTANGLE  "<<area<<endl;	
}

int main(){
	
	
//	print();
	area(2);
	area(4,8);
	area(float(2.5));
}
