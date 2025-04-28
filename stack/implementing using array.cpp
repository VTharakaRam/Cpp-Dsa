#include <iostream>
using namespace std;

class stack{
	public:
		int *a;
		int top;
		int size;
		
		stack(int size){
			this->size=size;
			top=-1;
			a=new int[size];
		}
		
		void push(int ele){
			if(size-top>1){
				top++;
				a[top]=ele;
			}
			else{
				cout<<"stack over flow"<<endl;
			}
		}
		
		void pop(){
			if(top>=0){
				top--;
			}
			else{
				cout<<"stack underflow"<<endl;
			}
		}
		
		int peak(){
			if(top>=0){
				return a[top];
			}
			else{
				cout<<"stack is empty"<<endl;
				return -1;
			}
		}
		
		bool isempty(){
			if(top==-1){
				return 1;
			}
			return 0;
		}
		
		void print(){
			if(top<0){
				cout<<"stack is empty"<<endl;
				return;
			}
			for(int i=top;i>=0;i--){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
};


int main(){
	
	
	stack s(5);
	
	s.push(4);
	s.push(8);
	s.push(45);
	s.push(1);
	s.push(0);
	
	s.print();
	
	s.pop();
	s.print();
	
	
	if(s.isempty()){
		cout<<"stack is empty"<<endl;
	}
	else{
		cout<<"stack is not empty"<<endl;
	}
	
	s.pop();
	
	cout<<"peak element is->"<<s.peak()<<endl;
	
	cout<<s.peak();
	s.pop();
}
