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

node* middleNode(node* head){
	int cnt=0;
	node* temp=head;
	
	while(temp!=nullptr){
		temp=temp->next;
		cnt++;
	}
	node* dup=head;
	
	int val;
	if(cnt%2==0){
		val=(cnt-2)/2;
	}
	else{
		val=(cnt-1)/2;
	}
	
	while(val--){
		dup=dup->next;
	}
	return dup;
}

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

bool palindrome(node* head){
	if(head==nullptr || head->next==nullptr){
		return true;
	}
	
	node* middle=middleNode(head);
	middle->next=reverse(middle->next);
	node* head1=head;
	node* check=middle->next;
	
	while(check!=nullptr){
		if(check->data != head1->data){
			return 0;
		}
		head1=head1->next;
		check=check->next;
	}
	return 1;
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
	node* n2=new node(5);
	node* n3=new node(2);
	node* n4=new node(2);
	node* n5=new node(4);
	node* n6=new node(1);
	
	head->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;
	
	print(head);
	
	if(palindrome(head)){
		cout<<"is palindrome "<<endl;
	}
	else{
		cout<<"not palindrome "<<endl;
	}
	
}
