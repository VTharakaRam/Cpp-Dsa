#include <iostream>
#include <set>
using namespace std;


int main(){
	
	set<int> s;

	s.insert(9);
	s.insert(6);
	s.insert(4);
	s.insert(5);
	s.insert(1);
	s.insert(1);
	s.insert(1);
	for(auto i:s){
		cout<<i<<" ";
	}
	cout<<endl;
	
	cout<<"size of set-> "<<s.size()<<endl;
	set<int>::iterator it=s.begin();
	it++;
	
	cout<<*it<<endl;
	
	s.erase(it);
	for(auto i:s){
		cout<<i<<" ";
	}
	cout<<endl;
	
	cout<<"is 5 present or not->"<<s.count(5)<<endl;
 
 	
	set<int>::iterator itr=s.find(6);
	cout<<"value present at it "<<*itr<<endl;
	for(auto a=itr;a!=s.end();a++){
		cout<<*a<<" ";
	}
	cout<<endl;
	
	
	
	return 0;
}
