#include <iostream>
using namespace std;

void num(int n){
		for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<j<<"  ";
		}
	cout<<endl;	
	}
}


void num1(int n){
	for(int i=3;i>=n;i--){
		for(int j=3;j>=n;j--){
			cout<<j<<"  ";
		}
	cout<<endl;	
	}
}

//************OR********************

void num2(int n){
		for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<n-j+1<<"  ";
		}
	cout<<endl;	
	}
}



int main(){
	
	cout<<"FIVE ROWS AND COLUMNS"<<endl;
	num(5);
	cout<<"THREE ROWS AND COLUMNS"<<endl;
	num1(1);
	cout<<"FIVE ROWS AND COLUMNS "<<endl;
	num2(5);
	
	return 0;
}
