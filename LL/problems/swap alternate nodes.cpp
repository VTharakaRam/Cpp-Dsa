#include <iostream>
#include <map>
using namespace std;

class node{
	public:
		int data;
		node* next;
		
		node(int data){
			this->data=data;
			this->next=nullptr;
		}
};

void print(node* head){
	node* temp=head;
	while(temp!=nullptr){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

node* swaped(node* &head){
	if(head==nullptr || head->next==nullptr){
		return head;
	}
	
	node* temp=head;
	node* front=nullptr;
	node* pre=nullptr;
	head=temp->next;
	while(temp!=nullptr && temp->next!=nullptr){
		front=temp->next;
		
		temp->next=front->next;
		front->next=temp;
		
		if(pre!=nullptr){
			pre->next=front;
		}
		pre=temp;
		temp=temp->next;
	}
	return head;
}



int main(){
	
	node* head=new node(9);
	node* n1=new node(3);
	node* n2=new node(1);
	node* n3=new node(6);
	node* n4=new node(5);
	node* n5=new node(7);
	node* n6=new node(4);
	
	head->next=n1;
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;
	
	print(head);
	cout<<"after swapping alternative nodes "<<endl;
	head=swaped(head);
	print(head);
	
}
