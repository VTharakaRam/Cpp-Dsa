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

node* reverseNode1(node* &n1){
	if(n1==NULL || n1->next==NULL){
		return n1;
	}
	node* pre=NULL;
	node* curr=n1;
	node* forward=NULL;
	while(curr!=NULL){
		forward=curr->next;
		curr->next=pre;
		pre=curr;
		curr=forward;
	}
	return pre;
}


void print(node* &n1){
	node* temp=n1;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	
	node* n1=new node(10);
	node* n2=new node(20);
	node* n3=new node(30);
	node* n4=new node(40);
	
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	
	print(n1);
	node* temp=reverseNode1(n1);
	print(temp);
	
	
}
