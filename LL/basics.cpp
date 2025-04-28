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

void insertAThead(node* &head,int d){
	node* temp=new node(d);
	temp->next=head;
	head=temp;
}

void printh(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		//cout<<temp->next<<endl;
		temp=temp->next;
	}
	cout<<endl;
}

void insertATtail(node* &tail,int d){
	node* temp=new node(d);
	tail->next=temp;
	tail=temp;
}


void printt(node* &tail){
	node* temp=tail;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		//cout<<temp
		temp=temp->next;
	}
	cout<<endl;
}




int main(){
	
	node* n1=new node(10);
	//cout<<n1->data<<endl;
	//cout<<n1->next<<endl;
	
//	node* n2=new node(20);
//	int n;cin>>n;
//	cout<<"before->";
//	printh(n1);
//	cout<<endl;
//	insertAThead(n1,n);
//	cout<<"after->";
//	printh(n1);
//	cout<<endl;
	
	
	node* n2=new node(20);
	node* n3=n2;
	printt(n3);
	int a;
	cin>>a;
	insertATtail(n2,a);
	printh(n3);
	int m;
	cin>>m;
	insertATtail(n2,m);
	printt(n3);
	cout<<endl;
	
	insertAThead(n2,14);
	printh(n3);
	
	insertATtail(n2,78);
	printt(n3);
}
