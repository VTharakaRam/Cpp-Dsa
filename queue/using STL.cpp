#include <iostream>
#include <queue>
using namespace std;

void print(queue<int> q){
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}

int main(){
	
	
	queue<int> q;
	
	q.push(12);
	q.push(2);
	q.push(4);
	q.push(7);
	q.push(89);
	
	cout<<"printing array->";
	print(q);
	cout<<"size->"<<q.size()<<endl;
	
	q.pop();q.pop();
	cout<<"printing array->";
	print(q);
	
	cout<<"front element->"<<q.front()<<endl;
	cout<<"back element->"<<q.back()<<endl;
	
	if(q.empty()){
		cout<<"queue is empty"<<endl;
	}
	else{
		cout<<"queue is not empty"<<endl;
	}
	
	
}
