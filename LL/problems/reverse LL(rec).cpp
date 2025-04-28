#include <iostream>
#include <stack>
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


// T.C- O(n)  S.C- O(n)
node* reverse(node* head){
	if(head==nullptr || head->next==nullptr){
		return head;
	}
	
	node* newhead=reverse(head->next);
	
	node* front=head->next;
	front->next=head;
	head->next=nullptr;
	
	return newhead;
}

void print(node* head){
	node* temp=head;
	while(temp!=nullptr){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}


int main(){
	
	node* head=new node(1);
	node* n2=new node(3);
	node* n3=new node(2);
	node* n4=new node(5);
	
	head->next=n2;
	n2->next=n3;
	n3->next=n4;
	
	cout<<"before reversing linked list "<<endl;
	print(head);
	
	cout<<"after reversing linked list "<<endl;
	head=reverse(head);
	print(head);
	
	
	
}
