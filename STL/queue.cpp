#include <iostream>
#include <queue>
using namespace std;


int main(){
	
	queue<string> q;
	
	q.push("Velaga");
	q.push("Tharaka");
	q.push("Ram");
	
	cout<<"size of queue is:"<<q.size()<<endl;
	cout<<"first element->"<<q.front()<<endl;
	q.pop();
	cout<<"first element->"<<q.front()<<endl;
	
	cout<<"size of queue is:"<<q.size()<<endl;
	
	
	return 0;
}
