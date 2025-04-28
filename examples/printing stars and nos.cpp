#include <iostream>
using namespace std;

void num(int n){
	char count='*' ;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<count<<"  ";
		}
	cout<<endl;	
	}
}

void num1(int m){
	for(int i=1;i<=m;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<"  ";
		}  
	cout<<endl;	
	}
}

 num2(int n){
//	int count=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i<<"  ";
		}
	cout<<endl;	
	}
}

int main(){
	
	cout<<"printing stars"<<endl;
	num(5);
	cout<<endl;
	cout<<"printing same nos in rows"<<endl;
	num1(6);
	cout<<endl;
	cout<<"printing nos in order"<<endl;
	num2(5);
	
	return 0;
}
