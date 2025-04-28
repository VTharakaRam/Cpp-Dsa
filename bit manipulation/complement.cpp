#include <bits/stdc++.h>
using namespace std;

//returns the value in twos complement
int complement(int n){
	return ~n;
}


int main(){
	
	int n;
	cin>>n;
	
	cout<<complement(n)<<endl;
	
}
