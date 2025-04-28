#include <iostream>
using namespace std;

//tail recursion
void print1(int n){
	if(n==0){
		return ;
	}
	
	cout<<n<<endl;
	print1(n-1);
}

//head recursion
void print2(int n){
	if(n==0){
		return ;
	}
	
	print2(n-1);
	cout<<n<<endl;
}

int fact(int n){
	if(n==1){
		return 1;
	}
    return n*fact(n-1);
}

int sum(int n){
	if(n==1){
	    return 1;
	}
	return n+sum(n-1);
}

int power(int n){
	if(n==0){
		return 1;
	}
	return 2*power(n-1);
}

int main(){
	
	int n;
	cin>>n;
	
	int g=fact(n);
	cout<<"factorial->"<<g<<endl;
	
	cout<<"sum->"<<sum(n)<<endl;
	
	cout<<"2 power "<<n<<" is "<<power(n)<<endl;
	
	cout<<"print numbers,Tail recursion:"<<endl;
	print1(n);
	cout<<endl;
	
	cout<<"print numbers,Head recursion:"<<endl;
	print2(n);
	cout<<endl;
	
	
}
