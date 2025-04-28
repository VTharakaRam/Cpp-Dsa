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

// TC:-O(n)  SC:-O(1)
node* sortedlist(node* head){
	if(head==nullptr || head->next==nullptr){
		return head;
	}
	
	node* temp=head;
	while(temp->next!=nullptr){
		if(temp->data == temp->next->data){
			node* deletenode=temp->next;
			temp->next=temp->next->next;
			deletenode->next=nullptr;
			delete deletenode;
		}
		else{
			temp=temp->next;
		}
	}
	return head;
}

// TC:-O(n*n)  SC:-O(1)
node* unsortedlist1(node* head){
	if(head==nullptr || head->next==nullptr){
		return head;
	}
	
	node* cur=head;
	while(cur!=nullptr){
		node* temp=cur;
		while(temp->next!=nullptr){
			if(temp->next->data == cur->data){
				node* next_next_node=temp->next->next;
				node* delnode=temp->next;
				temp->next=next_next_node;
				delete delnode;
			}
			else{
				temp=temp->next;
			}
		}
		cur=cur->next;
	}
	return head;
}

// TC:-O(n)  SC:-O(n)
node* unsortedlist2(node* head){
	if(head==nullptr || head->next==nullptr){
		return head;
	}
	
	map<int,bool> m;
	
	node* temp=head;
	node* pre=nullptr;
	while(temp!=nullptr){
		if(m[temp->data]==1){
			pre->next=temp->next;
			delete temp;
			temp=pre->next;
		}
		else{
			m[temp->data]=1;
			pre=temp;
			temp=temp->next;
		}
	}
	return head;
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
	node* n2=new node(2);
	node* n3=new node(2);
	node* n4=new node(2);
	node* n5=new node(4);
	node* n6=new node(5);
	node* n7=new node(5);
	
	head->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;
	n6->next=n7;
	
	cout<<"sorted list before removing duplicates"<<endl;
	print(head);
	
	head=sortedlist(head);
	cout<<"after removing duplicates"<<endl;
	print(head);
	
	
	node* unso=new node(3);
	node* unso1=new node(9);
	node* unso2=new node(4);
	node* unso3=new node(3);
	node* unso4=new node(1);
	node* unso5=new node(7);
	node* unso6=new node(3);
	node* unso7=new node(0);
	
	unso->next=unso1;
	unso1->next=unso2;
	unso2->next=unso3;
	unso3->next=unso4;
	unso4->next=unso5;
	unso5->next=unso6;
	unso6->next=unso7;
	cout<<"unsorted list before removing duplicates"<<endl;
	print(unso);
	
	unsortedlist2(unso);
	
	cout<<"after removing duplicates"<<endl;
	print(unso);
	
}
