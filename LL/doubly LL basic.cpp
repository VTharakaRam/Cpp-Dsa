#include <iostream>
using namespace std;

class node{
	public:
		node* pre;
		int data;
		node* next;
		
		node(int data=0){
			this->data=data;
			this->next=NULL;
			this->pre=NULL;
		}
};

void forwardprint(node* &n1){
	node* temp=n1;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void backwardprint(node* &n1){
	node* temp=n1;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->pre;
	}
	cout<<endl;
}


int main(){
	
	
	node* n1=new node(10);
	node* n2=new node(20);
	node* n3=new node(30);
	
	n1->next=n2;
	n2->pre=n1;
	n2->next=n3;
	n3->pre=n2;
	
	cout<<"traversing from start->";
	forwardprint(n1);
	
	cout<<"traversing from end->";
	backwardprint(n3);
	
}
