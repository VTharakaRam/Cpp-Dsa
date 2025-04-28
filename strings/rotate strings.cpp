#include <bits/stdc++.h>
using namespace std;


bool equal(string &s,string &h){
	int n=s.size();
	if(s==h){
		return 1;
	}
	for(int i=1;i<n;i++){
		string ans=s;
		int j=0;
		while(j<n){
			ans[j]=s[(j+i)%n];
			j++;
		}
		if(ans==h){
			return 1;
		}
	}
	return 0;
}

void print(string s,string h){
	if(equal(s,h)){
		cout<<"strings are rotated and they can be equal";
	}
	else{
		cout<<"strings cannot be equal";
	}
}

int main(){
	
	string s="defdefdefabcabc";
	
	string h="defdefabcabcdef";
	
	print(s,h);
	
}
