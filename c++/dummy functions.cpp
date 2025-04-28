#include <iostream>
using namespace std;

int dummy(int n){
	n++;
	cout<<"n is "<<n<<endl;
}

int update(int a){
	a-=2;
	return a;
}


int main(){
	
	int n;
    cin>>n;
    dummy(n);
    
    
    cout<<"number n is "<<n<<endl;
	
	int a;
	cin>>a;
	cout<<update(a)<<endl;
	cout<<a<<endl;
	
	
	return 0;
}
