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

int length(node* head){
	if(head==nullptr){
		return 0;
	}
	int cnt=0;
	node* temp=head;
	do{
		cnt++;
		temp=temp->next;
	}
	while(temp!=head);
	return cnt;
}

vector<node*> divideLL(node* head){
	vector<node*> v(2,nullptr);
	if(head==nullptr){
		cout<<"empty list "<<endl;
		return v;
	}
	
	int cnt=length(head);
	
	if(cnt==1){
		v[0]=head;
		v[1]=nullptr;
		return v;
	}
	
	int a;
	if(cnt%2==0){
		a=cnt/2;
	}
	else{
		a=(cnt+1)/2;
	}
	
	int b=cnt-a;
	node* cur=head;
	node* pre=nullptr;
	while(a--){
		pre=cur;
		cur=cur->next;
	}
	pre->next=head;
	
	node* newhead=cur;
	
	while(b--){
		pre=cur;
		cur=cur->next;
	}
	
	pre->next=newhead;
	
	
	v[0]=head;
	v[1]=newhead;
	
	return v;
}


void print(node* head){
	if(head==nullptr){
		cout<<"Empty list "<<endl;
		return;
	}
	
	node* temp=head;
	do{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	while(temp!=head);
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
	n7->next=head;
	
	print(head);
	
	cout<<"after dividing into equal halfs "<<endl;
	
	vector<node*> v;
//	node* head1=new node(45);
//	head1->next=head1;
	
	v=divideLL(head);
	for(int i=0;i<v.size();i++){
		print(v[i]);
	}
	
}
