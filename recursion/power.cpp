#include <iostream>
#include <algorithm>
using namespace std;


int power(int n,int m){
	if(m==0){
		return 1;
	}
	else if(m==1){
		return n;
	}
	int ans=power(n,m/2);
	if(m%2==0){
		return ans*ans;
	}
	else{
		return n*ans*ans;
	}
}


int main(){
	
	
	int n;
	cin>>n;
	int m;
	cin>>m;
	
	cout<<power(n,m)<<endl;
	
	int a=19038;
	string s=to_string(a);
	sort(s.begin(),s.end());
	cout<<s;
	
	
	
}
