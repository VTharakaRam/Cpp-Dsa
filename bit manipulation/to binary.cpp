#include <bits/stdc++.h>
using namespace std;

string binary(int x){
	string s;
	while(x!=0){
		int rem=x%2;
		if(rem==1){
			s+='1';
		}
		else{
			s+='0';
		}
		x/=2;
	}
	reverse(s.begin(),s.end());
	return s;
}


int main(){
	
	
	int n;
	cin>>n;
	
	
	cout<<binary(n)<<endl;
	
	
}
