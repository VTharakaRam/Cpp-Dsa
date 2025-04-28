#include <iostream>
using namespace std;

int main(){
	
	int  i;
	cin>>i;
	while(i--){
		int a,b,c;
		cout<<"the value of a is:";
		cin>>a;
			cout<<"the value of b is:";
		cin>>b;
			cout<<"the value of c is:";
		cin>>c;
		if(a>b){
			if(a>c){
				cout<<"A is greater."<<endl;
				
			}
			else{
			cout<<"C is greater."<<endl;
		}
	    }
		else if (a==b==c){
			cout<<"all are equal"<<endl;
		}
		else{
			if(b>c){
			cout<<"B is greater."<<endl;
			}
			else{
				cout<<"C is greater."<<endl;
			}
		}
	}
	
	return 0;
} 
