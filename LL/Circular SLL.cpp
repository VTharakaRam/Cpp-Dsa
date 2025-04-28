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

void insertNode(node* &n1,int element,int d){
	//if the node is empty
	if(n1==NULL){
		node* temp=new node(d);
		n1=temp;
		temp->next=temp;
	}
	//non empty node
	//the element should present in the list
	else{
		node* newnode=new node(d);
		node* temp=n1;
		while(temp->data!=element){
			temp=temp->next;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	}
}

void deletenode(node* &n1,int d){
	if(n1==NULL){
		cout<<"list is empty please check it"<<endl;
		return;
	}
	
	node* temp=n1;
	node* forward=temp->next;
	
	while(forward->data!=d){
		temp=temp->next;
		forward=temp->next;
	}
	
  //if only one node is present then
	if(temp==forward){
		n1=NULL;
		return;
	}
	if(n1==forward){
		n1=temp;
		cout<<"temp->"<<temp->data<<" "<<endl;
	}
	temp->next=forward->next;
	forward->next=NULL;
	delete forward;
}

void print(node* &n1){
	node* temp=n1;
	
	if(temp==NULL){
		cout<<"list is empty"<<endl;
		return;
	}
	
	do{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	while(temp!=n1);
	cout<<endl;
}

int main(){
	
	node* n1=NULL;
	
	insertNode(n1,2,10);
	print(n1);
	
	insertNode(n1,10,20);
	print(n1);
	
	insertNode(n1,20,30);
	print(n1);
	
	insertNode(n1,30,40);
	print(n1);
	
	insertNode(n1,20,21);
	print(n1);
	
	insertNode(n1,10,13);
	print(n1);
	
	deletenode(n1,10);
	print(n1);
	
	deletenode(n1,21);
	print(n1);
	
	deletenode(n1,30);
	print(n1);
}
