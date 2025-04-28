#include <bits/stdc++.h>
using namespace std;

int todecimal(string s){
	int x;
	reverse(s.begin(),s.end());
	for(int i=0;i<s.size();i++){
		if(s[i]!='0'){
			x+=pow(2,i);
		}
		else{
			continue;
		}
	}
	return x;
}


int main(){
	
	string s;
	cin>>s;
	
	cout<<todecimal(s)<<endl;;
	
}
