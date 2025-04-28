#include <iostream>
#include <vector>
using namespace std;



int main(){
	
	vector<int> a= {2,4,7,4,9,0};
	
	vector<int>:: iterator it;
	for(it=a.begin();it!=a.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"we can also use in another way "<<endl;
	
	for(int value:a){
		cout<<value<<" ";
	}
	cout<<endl;
	
	//auto will directly assume the datatype 
	auto b="tharak";
	cout<<b<<endl;
	
	//we can write short code using auto
	for(auto i:a){
		cout<<i<<" ";
	}
	cout<<endl;
	
	
	
	return 0;
}
