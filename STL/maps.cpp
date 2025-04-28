#include <bits/stdc++.h>
using namespace std;


int main(){
	
	map<int,int> m;
	m.insert({33,12});
	m[55]=23;
	m.insert({48,1});
	m[55]=123456;
	
	cout<<"printing:"<<endl;
	for(auto i:m){
		cout<<"1->"<<i.first<<" , "<<"2->"<<i.second<<endl;
	}
	cout<<endl;
	
	cout<<"size is "<<m.size()<<endl;
	m.insert(pair<int,int>(123,9334));
	
	cout<<"printing:"<<endl;
	for(auto it=m.begin();it!=m.end();it++){
		cout<<"1->"<<it->first<<" , "<<"2->"<<it->second<<endl;
	}
	cout<<endl;
	
	cout<<"printing value at key 55->"<<m[55]<<endl;
	cout<<"printing value at key 123->"<<m.at(123)<<endl;
	
	if(m.count(123)){
		cout<<"found"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}
	
	if(m.count(33)){
		cout<<"key 33 is present "<<endl;
	}
	else{
		cout<<"key 33 is not present"<<endl;
	}
	cout<<endl;
	cout<<endl;
	
	cout<<"NEW MAP CREATED"<<endl;
	map<int,string> s;
	s.insert({1 ,"ram"});
	s.insert({2 ,"swathi"});
	s.insert({5 ,"tharak"});
	
	for(auto i:s){
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<endl;
	
	cout<<"after erase"<<endl;
	s.erase(2);
	cout<<"printing:"<<endl;
	for(auto i:s){
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<endl;
	
	cout<<s[1]<<"->"<<endl;
	cout<<s[2]<<"->"<<endl;//key 2 is created and value is 0;
	cout<<s[5]<<"->"<<endl;
	
	
	cout<<"printing:"<<endl;
	for(auto i:s){
		cout<<i.first<<" "<<i.second<<endl;
	}
}
