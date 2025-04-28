#include <bits/stdc++.h>
using namespace std;


int main(){
	
	unordered_map<int,char> m;
	m.insert({45,'a'});
	m[55]='b';
	m.insert({48,'w'});
	m[2]='r';
	
	cout<<"printing:"<<endl;
	for(auto i:m){
		cout<<"i.first->"<<i.first<<" , "<<"i.second->"<<i.second<<endl;
	}
	cout<<endl;
	
	cout<<m[45]<<"->"<<endl;
	cout<<m[9]<<"->"<<endl;//key 9 is created and value is 0;
	cout<<m[55]<<"->"<<endl;
	
	cout<<"printing:"<<endl;
	for(auto i:m){
		cout<<"i.first->"<<i.first<<" , "<<"i.second->"<<i.second<<endl;
	}
	cout<<endl;
	
	cout<<"size->"<<m.size()<<endl;
	
	m.erase(55);
	
	if(m.count(55)){
		cout<<"present"<<endl;
	}
	else{
		cout<<"not present"<<endl;
	}
	
	cout<<"printing:"<<endl;
	for(auto i:m){
		cout<<"i.first->"<<i.first<<" , "<<"i.second->"<<i.second<<endl;
	}
	cout<<endl;
	
}
