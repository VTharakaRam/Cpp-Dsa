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

node* twoSortedlist(node* first,node* second){
	if(first==nullptr){
		return second;
	}
	if(second==nullptr){
		return first;
	}
	
	
	node* l1=first;
    node* l2=second;
    
    node* head=new node(0);
    node* temp=head;
    
    while(l1!=nullptr && l2!=nullptr){
        if(l1->data <= l2->data){
            temp->next=l1;
            l1=l1->next;
        }
        else{
            temp->next=l2;
            l2=l2->next;
        }
        temp=temp->next;
    }

    while(l1!=nullptr){
        temp->next=l1;
        l1=l1->next;
        temp=temp->next;
    }

    while(l2!=nullptr){
        temp->next=l2;
        l2=l2->next;
        temp=temp->next;
    }
    return head->next;
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
	
	node* head=twoSortedlist(one,two);
	print(head);
	
	
}
