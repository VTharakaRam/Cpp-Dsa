#include <iostream>
using namespace std;

int main(){
	
//*******POST INCREMENT*************
    cout<<"POST INCREMENT"<<endl;
	int a=2;
	int b=a++;
	int c=++a;
	cout<<a<<endl;
	cout<<b<<endl;
	cout <<c<<endl;
	
	int sum=(a++)+b;
	cout<<sum<<endl;
	cout<<a<<endl;
	cout<<endl;
	
//*******PRE INCREMENT*****************	
    cout<<"PRE INCREMENT"<<endl;
	int n=3;
	cout<<++n<<endl;
	int m=++n;
	cout<<m<<endl;
	
	int sum1=(++n)+m;
	cout<<sum1<<endl;
	cout<<endl;
	
//********POST DECREMENT*********	
    cout<<"POST DECREMENT"<<endl;
	int d=2;
	cout<<d--<<endl;
	int e=d;
	cout<<e<<endl;
	cout<<endl;
	
//********PRE DECREMENT*********
    cout<<"PRE DECREMENT"<<endl;
    int h=5;
    cout<<--h<<endl;
    int f=--h;
    cout<<f<<endl;
    
	return 0;
}
