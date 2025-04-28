#include <iostream>
#include <list>
using namespace std;



int main(){
	
	list<int> l;
	
	list<int> n(5,100);
	
	l.push_back(1);
	l.push_front(2);
	l.push_front(3);
	l.push_front(4);
	l.push_front(5);
	l.push_front(6);
	
	for(int i:l){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"before erase:"<<endl;
	l.erase(l.begin());
	cout<<"after erase:"<<endl;
	for(int i:l){
		cout<<i<<" ";
	}
	cout<<endl;
	
	cout<<"size of list is:"<<l.size()<<endl;
	
	cout<<"printing n"<<endl;
	for(int i:n){
		cout<<i<<" ";
	}
	cout<<endl;
	
	return 0;
}
