#include <iostream>
using namespace std;

//*************using for loop***************** 
void num(int n){
	int count=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<count<<"      ";
	        count=count+1;
		}
		cout<<endl;
	}
}

//****************using while loop*********************

int num1(int n){
	int count=1;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<count<<"  ";
			count=count+1;
			j++;
		}
		i++;
		cout<<endl;
	}
}


int main(){
	
	cout<<"using for loop"<<endl;
	num(5);
	cout<<endl;
	cout<<"using while loop"<<endl;
	num1(5);
	
	
	return 0;
}
