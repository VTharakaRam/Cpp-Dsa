#include <iostream>
#include <queue>
using namespace std;

class Stack{
	queue<int> q1,q2;
	
	public:
		void push(int x){
			q2.push(x);
			while(!q1.empty()){
				q2.push(q1.front());
				q1.pop();
			}
			
			queue<int> q=q1;
			q1=q2;
			q2=q;
		}
		
		void pop(){
			if(q1.empty()){
				return;
			}
			q1.pop();
		}
		
		int top(){
			if(q1.empty()){
				return -1;
			}
			return q1.front();
		}
		
		int size(){
			return q1.size();
		}
};


int main(){
	
	Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(67);
    s.push(9);
    s.push(45);
    
	
	cout << "current size: " << s.size() << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << "current size: " << s.size() << endl;
	
}



