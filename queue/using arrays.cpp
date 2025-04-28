#include<iostream>
#include <queue>
using namespace std;

class Queue{
	public:
	int* arr;
	int rear;
	int front;
	int size;
	
	Queue(int n){
		this->size=n;
		rear=0;
		front=0;
		arr=new int[n];
	}
	
	void enqueue(int d){
		if(rear>size-1){
			cout<<"size exceeded"<<endl;
			return;
		}
		arr[rear]=d;	
		rear++;
	}
	
	void dequeue(){
		if(front==rear){
			cout<<"queue is empty"<<endl;
			return;
		}
		arr[front]=-1;
		front++;
		if(front==rear){
			front=0;
			rear=0;
		}
	}
	
	void first(){
		if(front==rear){
			cout<<"queue is empty"<<endl;
			return;
		}
		cout<<"front->"<<arr[front]<<endl;
	}
	
	void back(){
		if(rear==size){
			cout<<"limit exceeded"<<endl;
			return;
		}
		cout<<"back->>"<<arr[rear-1]<<endl;
	}
	
	bool isEmpty(){
		if(front==rear){
			return 1;
		}
		return 0;
	}
	
	void print(){
		if(isEmpty()){
			cout<<"queue is empty"<<endl;
			return;
		}
		int a=front;
		while(a<rear){
			cout<<arr[a]<<" ";
			a++;
		}
		cout<<endl;
	}
};

//void print(Queue q){
//	if(q.isEmpty()){
//		cout<<"queue is empty"<<endl;
//		return;
//	}
//	while(!q.isEmpty()){
//		cout<<q.front<<" ";
//	}
//	cout<<endl;
//}

int main(){
	
	Queue q(5);
	//q.rear=5;
	
	q.enqueue(1);
	q.back();
	q.enqueue(2);
	q.enqueue(8);
	q.enqueue(6);
	q.print();
	q.dequeue();
	q.print();
	if(q.isEmpty()){
		cout<<"queue is empty"<<endl;
	}
	else{
		cout<<"queue is not empty"<<endl;
	}
	q.first();
	q.back();
	
	
}
