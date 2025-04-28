#include <iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		node(int data=0){
			this->data=data;
			this->next=NULL;
		}
};

void print(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void insertatfront(node* &n1,int d){
	node* temp=new node(d);
	temp->next=n1;
	n1=temp;
}

void insertatlast(node* &n1,int d){
	node* gem=new node(d);
	node* temp=n1;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=gem;
}


int main(){
	
	
	node* n1=new node(10);
	print(n1);
	
	
	node* n2=new node(20);
	insertatfront(n1,20);
	print(n1);
	
	insertatlast(n1,30);
	print(n1);
	
}
