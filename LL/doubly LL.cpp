#include <iostream>
using namespace std;

class node{
	public:
		node* pre;
		int data;
		node* next;
		
		node(int data=0){
			this->data=data;
			this->next=NULL;
			this->pre=NULL;
		}
};


void insertAtTop(node* &head,int d){
	node* temp=new node(d);
	temp->next=head;
	head->pre=temp;
	head=temp;
}

void insertAtEnd(node* &tail,int d){
	node* temp=new node(d);
	temp->pre=tail;
	tail->next=temp;
	tail=temp;
}

void print(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void insertAtPosition(node* &head,node* &tail,int d,int position){
	node* temp=new node(d);
	if(position==1){
		insertAtTop(head,d);
		return;
	}
	int cnt=1;
	node* back=head;
	while(cnt<position-1){
		back=back->next;
		cnt++;
	}
	if(back->next==NULL){
		insertAtEnd(tail,d);
		return;
	}
	temp->pre=back;
	temp->next=back->next;
	back->next->pre=temp;
	back->next=temp;
}


void deleteNode(node* &head,node* &tail,int position){
	if(position==1){
		node* temp=head;
		head=head->next;
		delete temp;
		return;
	}
	int cnt=1;
	node* temp=head;
	node* back=temp->next;
	while(cnt<position-1){
		temp=temp->next;
		back=temp->next;
		cnt++;
	}
	if(back->next==NULL){
		temp->next=NULL;
		tail=temp;
		delete back;
		return;
	}
	back->next->pre=temp;
	temp->next=back->next;
	delete back;
}

int main(){
	
	node* n1=new node(10);
	print(n1);
	node* head=n1;
	node* tail=n1;
	
	insertAtTop(head,9);
	print(head);
	
	insertAtTop(head,8);
	print(head);
	
	insertAtTop(head,5);
	print(head);
	
	insertAtEnd(tail,15);
	print(head);
	
	int n;
	cin>>n;
	insertAtPosition(head,tail,n,6);
	print(head);
	
	int m;
	cin>>m;
	insertAtPosition(head,tail,m,3);
	print(head);
	
	cout<<"printing the last element->";
	print(tail);
	
	cout<<"deleting elements->>>>"<<endl;
	deleteNode(head,tail,1);
	print(head);
	
	deleteNode(head,tail,6);
	print(head);
	print(tail);
}
