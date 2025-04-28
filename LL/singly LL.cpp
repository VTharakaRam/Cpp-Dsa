#include <iostream>
#include <vector>
using namespace std;

class node{
	public:
		int data;
		node* next;
		node(int d=0){
			this->data=d;
			this->next=NULL;
		}
};


void insertNodeAtTop(node* &n1,int d){
	node* temp=new node(d);
	temp->next=n1;
	n1=temp;
}

void print(node* &n1){
	node* temp=n1;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void insertNodeAtEnd(node* &n2,int d){
	node* temp=new node(d);
	node* dul=n2;
	while(dul->next!=NULL){
		dul=dul->next;
	}
	dul->next=temp;
}


void insertAtPosition(node* &n1,int position,int d){
	node* temp=new node(d);
	if(position==1){
		temp->next=n1;
		n1=temp;
		return;
	}
	node* dul=n1;
	int cnt=1;
	while(cnt < position-1){
		dul=dul->next;
		cnt++;
	}
	temp->next=dul->next;
	dul->next=temp;
}


void deleteNode(node* &n1,int position){
	if(position==1){
		node* temp=n1;
		n1=n1->next;
		temp->next=NULL;
		delete temp;
		return;
	}
	node* pre=n1;
	node* temp=pre->next;
	int cnt=1;
	while(cnt<position-1){
		temp=temp->next;
		pre=pre->next;
		cnt++;
	}
	pre->next=temp->next;
	temp->next=NULL;
	delete temp;
}

int main(){
	
	
	node* n1=new node(10);
	print(n1);
	
	int n;
	cin>>n;
	insertNodeAtTop(n1,n);
	print(n1);
	
	insertNodeAtTop(n1,15);
	print(n1);
	
	int m;
	cin>>m;
	insertNodeAtEnd(n1,m);
	print(n1);
	
	
	insertAtPosition(n1,5,1);
	print(n1);
	
	deleteNode(n1,1);
	print(n1);
	
	deleteNode(n1,2);
	print(n1);
	
	cout<<"cout->>>>>>>.."<<endl;
	node* hy=n1;
	hy->next=new node(67);
	print(hy);
	
}
