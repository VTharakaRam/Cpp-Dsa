#include <iostream>
using namespace std;


struct student{
  // data	
    float marks;
	char initial;
	int rank; 
	};

int main(){
	
	
	cout<<"List about Swathi"<<endl;
	struct student swathi;
	swathi.marks=99.5;
	swathi.initial='V';
	swathi.rank=1;
	cout<<"The marks for swathi :"<<swathi.marks<<endl;
	cout<<"The initial for swathi :"<<swathi.initial<<endl;
	cout<<"The rank for swathi :"<<swathi.rank<<endl;
	
	cout<<endl;
	cout<<endl;
	
	
	cout<<"List about Tharak"<<endl;
	struct student tharak;
	tharak.marks=90;
	tharak.initial='V';
	tharak.rank=10;
	cout<<"The marks for tharak :"<<tharak.marks<<endl;
	cout<<"The initial for tharak :"<<tharak.initial<<endl;
	cout<<"The rank for tharak :"<<tharak.rank<<endl;
	
	
	
	
	return 0;
}
