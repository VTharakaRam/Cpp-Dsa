#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void small(queue<int> &q,int d){
	queue<int> dq;
	int n=q.size();
	int i=0;
	stack<int> s;
	while(i<d){
		s.push(q.front());
		q.pop();
		i++;
	}
	while(!s.empty()){
		dq.push(s.top());
		s.pop();
	}
	for(int i=d;i<n;i++){
		dq.push(q.front());
		q.pop();
	}
	q=dq;
}

void print(queue<int> q){
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}

int main(){
	
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	
	print(q);
	
	small(q,2);
	
	print(q);
	
	
}
