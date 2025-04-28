#include <iostream>
using namespace std;

num(int n){
	for(int i=0;i<=n;i++){
		cout<<++i<<"   ";
	}
}

int main(){
	
	cout<<"first 15 odd numbers:"<<endl;
	num(30);
	cout<<endl;
	cout<<"first 50 odd numbers:"<<endl;
	num(100);
	
	
	return 0;
}
