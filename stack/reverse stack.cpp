#include <iostream>
#include <stack>
using namespace std;

stack<int> reverseStack1(stack<int> &s){
	stack<int> v;
	int n=s.size();
	for(int i=0;i<n;i++){
		v.push(s.top());
		s.pop();
	}
	return v;
}

void print(stack<int> s){
	int n=s.size();
	for(int i=0;i<n;i++){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}

void insertvalue(stack<int> &s,int x){
	if(s.empty()){
		s.push(x);
		return;
	}
	int num=s.top();
	s.pop();
	insertvalue(s,x);
	s.push(num);
}


void reverseStack2(stack<int> &s){
	if(s.empty()){
		return;
	}
	int num=s.top();
	cout<<"s.top()->>>>>>"<<s.top();
	s.pop();
	reverseStack2(s);
	
	insertvalue(s,num);
	
	
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
		
}


int main(){
	
	stack<int> s;
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		s.push(num);
	}
	
	cout<<"before->";
	print(s);
	
	cout<<"after->";
	print(reverseStack1(s));
	
	stack<int> f;
	
	f.push(12);
	f.push(4);
	f.push(9);
	f.push(67);
	f.push(100);
	
	cout<<"before recursive call->";
	print(f);
	
	
	cout<<"after recursive call->";
	reverseStack2(f);
	
	
}
