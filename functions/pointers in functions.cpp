#include <iostream>
using namespace std;

//void update(int *m){
////	m=m+1;
////	cout<<"inside->"<<m<<endl;
//	
//	*m=*m+1;
//	cout<<"updated->"<<*m<<endl;
//}

int main(){
	
	int p=5;
	int *c=&p;
	cout<<c<<endl;
//	cout<<"before->"<<c<<endl;
	cout<<"non-updated->"<<*c<<endl;
	//update(c);
	cout<<"after->"<<*c<<endl;
	
	
}
