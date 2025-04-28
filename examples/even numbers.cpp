#include <iostream>
#include <cmath>
using namespace std;


void num(int n){
	for(int i=0;i<=n;i++){
		cout<<i++<<"   ";
	}
}



int main(){
	
	cout<<"First ten even numbers"<<endl;
	num(20); 
	cout<<endl;
	cout<<"First fifty even numbers"<<endl;
	num(100);
		
	return 0;
}
