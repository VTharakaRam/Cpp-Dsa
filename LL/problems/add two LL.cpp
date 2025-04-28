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

node* reverse(node* head){
	if(head==nullptr){
		return head;
	}
	
	node* cur=head;
	node* pre=nullptr;
	node* front=nullptr;
	
	while(cur!=nullptr){
		front=cur->next;
		cur->next=pre;
		pre=cur;
		cur=front;
	}
	return pre;
}

// TC:-O(m+n) SC:-O(max(m,n))
node* addLL(node* first,node* second){
	if(first==nullptr){
		return second;
	}
	if(second==nullptr){
		return first;
	}
	
	node* n1=reverse(first);
	node* n2=reverse(second);
	
	node* ans=new node(-1);
	node* scr=ans;
	int carry=0;
	while(n1!=nullptr && n2!=nullptr){
		int sum=carry+n1->data+n2->data;
		ans->next=new node(sum%10);
		carry=sum/10;
		n1=n1->next;
		n2=n2->next;
		ans=ans->next;
	}
	
	while(n2!=nullptr){
		int sum=carry+n2->data;
		ans->next=new node(sum%10);
		carry=sum/10;
		n2=n2->next;
		ans=ans->next;
	}
	
	while(n1!=nullptr){
		int sum=carry+n1->data;
		ans->next=new node(sum%10);
		carry=sum/10;
		n1=n1->next;
		ans=ans->next;
	}
	
	if(carry!=0){
		ans->next=new node(carry%10);
		ans=ans->next;
	}
	return reverse(scr->next);
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
	
	node* one=new node(1);
	node* n1=new node(3);
	node* n2=new node(5);
	
	one->next=n1;
	n1->next=n2;
	
	
	node* two=new node(2);
	node* n3=new node(4);
	node* n4=new node(6);
	
	two->next=n3;
	n3->next=n4;
	
	cout<<"first list "<<endl;
	print(one);
	cout<<"second list "<<endl;
	print(two);
	
	node* head=addLL(one,two);
	print(head);
	
}
