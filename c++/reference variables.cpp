#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void update1(int n){
	n++;
	cout<<"inside->"<<n<<endl;
}

void update2(int &n){
	n++;
	cout<<"inside->"<<n<<endl;
}



int main(){
	
	int n=5;
	cout<<"before->"<<n<<endl;
	update1(n);
	cout<<"after->"<<n<<endl;
	
	//creating reference variable
	int &j=n;
	cout<<j<<endl;
	
	cout<<"before->"<<n<<endl;
	update2(n);
	cout<<"after->"<<n<<endl;
	
	
}
