#include <bits/stdc++.h>
using namespace std;

int count(string s){
	stringstream ss(s);
	int cnt=0;
	string i;
	
	
	while(ss>> i){
		cnt++;
	}
	return cnt;
}

int main(){
	
	string s="geeks for geeks geeks contribution placements";
	cout<<"no of sub strings are "<<count(s)<<endl;
	
	string h="the moon";
	
	stringstream ss(h);
	int cnt=0;
	string i;
	
	
	while(ss>> i){
		cnt++;
	}
	
	cout<<" no of substrings->"<<cnt<<endl;
	
	
}
