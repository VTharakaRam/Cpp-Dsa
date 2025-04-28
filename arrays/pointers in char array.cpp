#include <iostream>
using namespace std;



int main(){
	
	string s[1]={"tharak"};
	cout<<s[0][0]<<endl;
	char ch[7]="abc\0de";
	cout<<ch[0]<<endl;
	cout<<ch[1]<<endl;
	cout<<ch[2]<<endl;
	cout<<ch[3]<<endl;
	cout<<ch[4]<<endl;
	cout<<ch[5]<<"empty"<<endl;
	
	cout<<ch<<endl;
	
	char *c=&ch[0];
	//prints entire string
	cout<<c<<endl;
	
	
	char t='z';
	char *m=&t;
	cout<<m<<endl;
	
	
	
	
}
