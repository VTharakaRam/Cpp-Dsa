#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



string value(string s,int k){
	vector<char> a;
	int n=s.size();
	int j=0;
	for(int i=0;i<n;i++){
		j=i+k;
		a.push_back(s[j%n]);
	}
	string d;
	for(int i=0;i<n;i++){
		d+=a[i];
	}
	return d;
}




int main(){
	
	string s="dart";
	string m="k";
	int k;
	cin>>k;
	
	cout<<value(s,k);
	
//	cout<<"string->"<<s[2]<<endl;
//	
//	cout<<m+s;
	
	
}
