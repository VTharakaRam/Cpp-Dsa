#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	
	char a[6]={'a','b','c','\0','d','e'};
	cout<<"size of a is "<<sizeof(a)<<endl;
	cout<<a<<endl;
	
	string s="dnj\0cndb";
	cout<<s<<endl;
	cout<<"size of s is "<<sizeof(s)<<endl;
	
	
	int n=14;
	n%=5;
	cout<<n<<endl;
	
	string g[10]={"demkf","dmke","\0","dnwk"};
	cout<<g[1]<<endl;
	//if you wana print the first char in index 0 then
	cout<<g[0][0]<<endl;
	cout<<g[1][3]<<endl; 
	
	
	return 0;
}
