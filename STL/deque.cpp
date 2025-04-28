#include <iostream>
#include <deque>
using  namespace std;

int main(){
	
	deque<int> d;
	
	d.push_back(1);
	d.push_front(2);
	
	for(int i:d){
		cout<<i<<" ";
	}
	cout<<endl;
	
	
	d.pop_back();
	for(int i:d){
		cout<<i<<" ";
	}
	
	d.push_back(3);
	d.pop_front();
	for(int i:d){
		cout<<i<<" ";
	}
	cout<<endl;
	d.push_back(4);
	
	cout<<"first element at index: "<<d.at(1)<<endl;
	
	cout<<"front->"<<d.front()<<endl;
	cout<<"back->"<<d.back()<<endl;
	
	cout<<"empty or not"<<d.empty()<<endl;
	
	cout<<"before erase "<<d.size()<<endl;
	d.erase(d.begin(),d.begin()+1);
	for(int i:d){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"after erase "<<d.size()<<endl;
	
		
	return 0;
}
