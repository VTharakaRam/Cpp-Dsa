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

// TC:-O(2n) SC:-O(1)
node* correctOrder(node* head){
	if(head==nullptr){
		return head;
	}
	
	int cnt0=0,cnt1=0,cnt2=0;
	node* temp=head;
	while(temp!=nullptr){
		if(temp->data==0){
			cnt0++;
		}
		else if(temp->data==1){
			cnt1++;
		}
		else{
			cnt2++;
		}
		temp=temp->next;
	}
	
	node* cur=head;
	while(cur!=nullptr){
		if(cnt0>0){
			cur->data=0;
			cnt0--;
		}
		else if(cnt1>0){
			cur->data=1;
			cnt1--;
		}
		else{
			cur->data=2;
			cnt2--;
		}
		cur=cur->next;
	}
	return head;
}

// TC:-O(n) SC:-O(1)
node* sortedlist(node* head){
	if(head==nullptr){
		return head;
	}
	node* zeronode=new node(-1);
	node* zero=zeronode;
	
	node* onenode=new node(-1);
	node* one=onenode;
	
	node* twonode=new node(-1);
	node* two=twonode;
	
	node* temp=head;
	while(temp!=nullptr){
		if(temp->data==0){
			zero->next=temp;
			zero=zero->next;
		}
		else if(temp->data==1){
			one->next=temp;
			one=one->next;
		}
		else{
			two->next=temp;
			two=two->next;
		}
		temp=temp->next;
	}
	zero->next=(onenode->next!=nullptr)? onenode->next : twonode->next;
	one->next=twonode->next;
	two->next=nullptr;
	
	
	node* sortedHead = zeronode->next;
	delete zeronode;
    delete onenode;
    delete twonode;
    
	return sortedHead;
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
	
	node* head=new node(0);
	node* n2=new node(2);
	node* n3=new node(1);
	node* n4=new node(2);
	node* n5=new node(1);
	node* n6=new node(0);
	node* n7=new node(0);
	
	head->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;
	n6->next=n7;
	
	print(head);
	
	//head=correctOrder(head);
	
	head=sortedlist(head);
	print(head);
	
}
