#include <bits/stdc++.h>
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

node* rever(node* head){
	if(head==nullptr){
		return head;
	}
	node* pre=nullptr;
	node* temp=head;
	node* front=nullptr;
	while(temp!=nullptr){
		front=temp->next;
		temp->next=pre;
		pre=temp;
		temp=front;
	}
	return pre;
}

//T.C:-O(n) S.C:-O(1)
node* ret(node* head,int n){
	if(head==nullptr){
		return head;
	}
	
	node* reversed=rever(head);
	node* temp=reversed;
	node* pre=nullptr;
	if(n==1){
		return rever(temp->next);
	}
	int cnt=1;
	while(temp!=nullptr && cnt!=n){
		cnt++;
		pre=temp;
		temp=temp->next;
	}
	pre->next=temp->next;
	return rever(reversed);
}

//T.C:-O(n) S.C:-O(1)
node* removeNthFromEnd(node* head,int n){
	node* ans=new node(-1);
	ans->next=head;
	node* demo=ans;
	
	for(int i=0;i<n;i++){
		head=head->next;
	}
	while(head!=nullptr){
		head=head->next;
		demo=demo->next;
	}
	demo->next=demo->next->next;
	return ans->next;
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
	node* n2=new node(0);
	node* n3=new node(8);
	node* n4=new node(6);
	node* n5=new node(4);
	node* n6=new node(5);
	node* n7=new node(3);
	
	head->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;
	n6->next=n7;
	
	print(head);
	
	head=removeNthFromEnd(head,3);
	print(head);
	
}
