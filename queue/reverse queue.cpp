#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void rever1(queue<int> &q){
	stack<int> s;
	while(!q.empty()){
		s.push(q.front());
		q.pop();
	}
	while(!s.empty()){
		q.push(s.top());
		s.pop();
	}
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
	int n;
	cout<<"enter the size of queue->";
	cin>>n;
	
	int var;
	while(n--){
		cin>>var;
		q.push(var);
	}
	cout<<"before reversal->";
	print(q);
	
	rever1(q);
	cout<<"after reversal->";
	print(q);
	
	
}

