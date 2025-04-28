#include <iostream>
//including header file
#include <vector>
using namespace std;


int main(){
	
	vector<int> v;
	
	vector<int> a(5,1);
	cout<<"print a"<<endl;
	for(int i:a){
		cout<<i<<" ";
	}
	cout<<endl;
	
	vector<int> last(a);
	cout<<"print last"<<endl;
	for(int i:last){
		cout<<i<<" ";
	}
	
	cout<<endl;
	
	cout<<"capacity->"<<v.capacity()<<endl;
	v.push_back(1);
	cout<<"capacity->"<<v.capacity()<<endl;
	v.push_back(2);
	cout<<"capacity->"<<v.capacity()<<endl;
	v.push_back(3);
	cout<<"capacity->"<<v.capacity()<<endl;
	//space alloted to store elements are capacity
	cout<<"size->"<<v.size()<<endl;
	//no.of elements stored 
	
	cout<<"the element at 2 index is:"<<v.at(2)<<endl;
	cout<<"first number in array is "<<v.front()<<endl;
	cout<<"last number in array is "<<v.back()<<endl;
	cout<<endl;
	
	cout<<"before pop"<<endl;
	for(int i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	
	v.pop_back();
	cout<<"after pop"<<endl;
	for(int i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	
	
	v.push_back(23);
	v.push_back(81);
	v.push_back(45);
	v.push_back(63);
	v.push_back(124);
	v.push_back(69);	
	cout<<"before erase"<<endl;
	for(int i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	
	v.erase(v.begin()+5,v.end());
	v.erase(v.begin()+2);
	
	cout<<"after erase"<<endl;
	for(int i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	
	
	cout<<"before clear size "<<v.size()<<endl;
	v.clear();
	cout<<"after clear size "<<v.size()<<endl;
	
	return 0;
}
