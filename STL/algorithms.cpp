#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
	
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(4);
	v.push_back(7);
	v.push_back(8);
	
	
	cout<<"print elements->"<<endl;
	for(auto i: v){
		cout<<i<<" ";
	}
	cout<<endl;
	
	cout<<"binary_search->"<<binary_search(v.begin(),v.end(),5)<<endl;
	cout<<"binary_search->"<<binary_search(v.begin(),v.end(),4)<<endl;
	
	int a=3,b=6;
	swap(a,b);
	cout<<"a->"<<a<<endl<<"b->"<<b<<endl;
	
	cout<<"max->"<<max(a,b)<<endl;
	cout<<"min->"<<min(a,b)<<endl;
	
	string k="tharak";
	reverse(k.begin(),k.end());
	cout<<"reverse->"<<k<<endl;
	
	cout<<"rotating elements in a vector"<<endl;
	rotate(v.begin()+1,v.begin()+2,v.end()-1);
	cout<<"after rotate"<<endl;
	for(auto i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	
	
	cout<<"rotating elements in a vector"<<endl;
	rotate(v.begin()+1,v.begin()+3,v.end());
	cout<<"after rotate"<<endl;
	for(auto i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	
	
	cout<<"sorting an elements in vector"<<endl;
	sort(v.begin(),v.end()-2);
	for(int i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	
	cout<<"sorting an elements in vector"<<endl;
	sort(v.begin(),v.end());
	for(int i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	
	
	return 0;
}
