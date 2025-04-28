#include <iostream>
using namespace std;

int ways(int n){
	if(n==0){
		return 1;
	}
	else if(n<0){
		return 0;
	}
	return ways(n-1)+ways(n-2);
}

int main(){
	
	int n;
	cin>>n;
	
	cout<<ways(n);
	
	
}
