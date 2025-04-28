#include <iostream>
#include <stack>
using namespace std;

void stacksort(stack<int> &s,int x){
	if(s.empty() || (!s.empty() && s.top()< x)){
		s.push(x);
		return;
	}
	
	//cout<<"hi";
	int n=s.top();
	s.pop();
	
	stacksort(s,x);
	
	s.push(n);
}

void sortStack(stack<int> &s){
	if(s.empty()){
		return;
	}
//	cout<<"hi";
	int num=s.top();
	s.pop();
	
	sortStack(s);
	
	stacksort(s,num);
	
}

void print(stack<int> s){
	int n=s.size();
	for(int i=0;i<n;i++){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}

stack<int> sortStackbyLoop(stack<int> &s){
	stack<int> temp;
	
	while(!s.empty()){
		int top=s.top();
		s.pop();
		while(!temp.empty() && temp.top()>top){
			s.push(temp.top());
			temp.pop();
		}
		temp.push(top);
	}
	s=temp;
	return s;
} 

int main(){
	
	stack<int> f;
	
	f.push(12);
	f.push(-2);
	f.push(2);
	f.push(1);
	f.push(20);
	
	cout<<"before sorting->";
	print(f);
	
	cout<<"after sorting->";
	sortStack(f);
	print(f);
	
	stack<int> d;
	
	d.push(12);
	d.push(-2);
	d.push(2);
	d.push(1);
	d.push(20);
	
	cout<<"before sorting using loops->";
	print(d);
	cout<<"after sorting using loops->";
	print(sortStackbyLoop(d));
	
}
