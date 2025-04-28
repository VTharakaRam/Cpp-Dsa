#include <iostream>
#include <queue>
using namespace std;

class circular{
	public:
		int *a;
		int front;
		int rear;
		int size;
		
		circular(int n){
			this->size=n;
			a=new int[size];
			front=-1;
			rear=-1;
		}
		
		void enqueue(int m){
			if((rear==size-1 && front==0) || (rear==(front-1)%(size-1))){
				cout<<"queue is full"<<endl;
				return;
			}
			else if(front==-1){
				rear=front=0;
				a[rear]=m;
			}
			else if(rear==size-1 && front!=0){
				rear=0;
				a[rear]=m;
			}
			else{
				rear++;
				a[rear]=m;  
			} 
		}
		
		void dequeue(){
			if(front==-1){
				cout<<"queue is empty"<<endl;
				return;
			}
			a[front]=-1;
			
			if(front==rear){
				rear=front=-1;
			}
			else if(front==size-1){
				front=0;
			}
			else{
				front++;
			}
		}
		
		void print(){
			if(front==-1){
				cout<<"queue is empty while printing"<<endl;
			}
			if(front<=rear){
				for(int i=front;i<=rear;i++){
					cout<<a[i]<<" ";
				}
				cout<<endl;
			}
			else{
				for(int i=front;i<size;i++){
					cout<<a[i]<<" ";
				}
				for(int i=0;i<=rear;i++){
					cout<<a[i]<<" ";
				}
				cout<<endl;
			}
			
		}
};


int main(){
	
	
	circular q(5);
	
	q.enqueue(2);
	q.enqueue(4);
	q.enqueue(1);
	q.print();
	
	q.dequeue();
	
	q.print();
	
	q.enqueue(7);
	q.enqueue(18);
	q.dequeue();
	q.enqueue(34);
	q.enqueue(89);
	
	
	q.print();
	
}
