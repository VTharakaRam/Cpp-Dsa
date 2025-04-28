#include <iostream>
using namespace std;

num(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=4;j++){
			cout<<j<<"  ";
		}
		cout<<endl;
	}
}

int main(){
	
	num(5);
	
	return 0;
}
