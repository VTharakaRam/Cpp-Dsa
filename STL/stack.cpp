#include <iostream>
#include <stack>
using namespace std;


int main(){
	
	stack<string> s;
	
	s.push("Velaga");
	s.push("Tharaka");
	s.push("Ram");
	
	cout<<"top element->"<<s.top()<<endl;
	s.pop();
	cout<<"top element->"<<s.top()<<endl;
	
	cout<<"size of stack:"<<s.size()<<endl;
	
	cout<<"is empty or not->"<<s.empty()<<endl;
	
	
	
	return 0;
}
