#include <iostream>
#include <cmath>
using namespace std;

int num(int n){
	int ans=(3*n)+7;
	cout<<ans;
  //  return ans;
}


int main (){
	
	int a;
	cout<<"Enter the value:";
	cin>>a;
	cout<<7<<"rd term in series is: "<<num(a)<<endl;
	
	
	num(3);
	num(4);
	
	return 0;
}
