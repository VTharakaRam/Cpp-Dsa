#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	
	int a=4;
	cout<<"A is "<<a<<endl;
	cout<<"Address of A is "<<&a<<endl;
	
    int *p;
    p =&a;
    cout<<"p is "<<p<<endl;
	cout<<"A printed via p is "<<*p<<endl;
	
	int* ar=NULL;
	cout<<"ar is "<<ar<<endl;
	
	int **app=&p;
	cout<<"Address of ap is "<<app<<endl;
	cout<<"value inside ap is "<<*app<<endl;
	cout<<"size->"<<sizeof(app)<<endl;
	
	
	int i=5;
	int *pr=&i;
	cout<<(*pr)++<<endl;
	cout<<++(*pr)<<endl;
	cout<<i<<endl;
	cout<<endl;
	
	cout<<"size->"<<sizeof(i)<<endl;
	cout<<"size->"<<sizeof(&i)<<endl;
	cout<<"size->"<<sizeof(pr)<<endl;
	cout<<"size->"<<sizeof(*pr)<<endl;
	cout<<"size->"<<sizeof(&pr)<<endl;
	
	
	cout<<endl;
	//coping a pointer 
	int *q=pr;
	cout<<q<<" -- "<<pr<<endl;
	cout<<*q<<" - "<<*pr<<endl;
	
	
}
