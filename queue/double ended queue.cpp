#include <iostream>
#include <queue>
using namespace std;


int main(){
	
	deque<int> q;
	
	q.push_back(3);
	q.push_front(7);
	q.push_back(1);
	
	cout<<"front->"<<q.front()<<endl;
	cout<<"back->"<<q.back()<<endl;
	
	q.pop_back();
	q.pop_front();
	
	if(q.empty()){
		cout<<"queue is empty"<<endl;
	}
	else{
		cout<<"queue is not empty"<<endl;
	}
	
	
	
}
