#include <iostream>
using namespace std;

class values{
	public:
		void area(int a){
			cout<<"this is square 1->"<<a*a<<endl;
		}
		void area(double a){
			cout<<"this is square 2->"<<a*a<<endl;
		}
		void area(int l,int b){
			cout<<"this is rectangle->"<<l*b<<endl;
		}
		int area(int l,int w,int a,int b=0){
			return l+w+a+b;
		}
};

int main(){
	
	values v;
	int a;
	cin>>a;
	v.area(a);
	double b;
	cin>>b;
	v.area(b);
	int l,w;
	cin>>l>>w;
	v.area(l,w);
	cout<<"area->"<<v.area(l,w,a)<<endl;
	int d;
	cin>>d;
	cout<<"area->"<<v.area(l,w,a,d)<<endl;
	
	
	
	
}
