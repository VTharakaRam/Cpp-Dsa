#include <iostream>
#include <stack>
using namespace std;



int main(){
	
	stack<int> s;
	
	s.push(3);
	
	s.push(6);
	s.push(1);
	s.push(7);
	s.push(3);
	
	s.pop();	
	cout<<s.top()<<endl;
	
	if(s.empty()){
		cout<<"stack is empty"<<endl;
	}
	else{
		cout<<"stack is not empty"<<endl;
	}
	
	cout<<"size->"<<s.size()<<endl;
	
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	
	
}
