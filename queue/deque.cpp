#include <iostream>
#include <deque>
using namespace std;



int main(){
	
	deque<int> q;
	
	q.push_back(2);
	q.push_back(4);
	q.push_back(6);
	q.push_back(8);
	
	for(auto i:q){
		cout<<i<<endl;
	}
	
	
}
