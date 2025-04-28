#include <bits/stdc++.h>
#include <stack>
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

// T.C- O(n)  S.C- O(n)
void reverse1(node* &head){
	stack<int> s;
	node* temp=head;
	while(temp!=nullptr){
		s.push(temp->data);
		temp=temp->next;
	}
	temp=head;
	while(!s.empty()){
		temp->data=s.top();
		s.pop();
		temp=temp->next;
	}
	return;
}


// T.C- O(n)  S.C- O(1)  best case
node* reverse2(node* &head){
	if(head==nullptr || head->next==nullptr){
		return head;
	}
	node* temp=head;
	node* pre=nullptr;
	node* front=nullptr;
	while(temp!=nullptr){
		front=temp->next;
		temp->next=pre;
		pre=temp;
		temp=front;
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
	reverse1(head);
	print(head);
	
	cout<<"again after reversing linked list "<<endl;
	head=reverse2(head);
	print(head);
	
}
