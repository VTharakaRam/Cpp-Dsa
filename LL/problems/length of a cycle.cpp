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

// T.C- O(n)  S.C- O(n)
int lengthofcycle(node* head){
	if(head==nullptr){
		return 0;
	}
	
	node* temp=head;
	map<node*,int> vis;
	int cnt=1;
	int lenght=0;
	
	while(temp!=nullptr){
		if(vis.find(temp)!=vis.end()){
			return cnt-vis[temp];
		}
		cout<<cnt<<endl;
		vis[temp]=cnt;
		temp=temp->next;
		cnt++;
	}
	return 0;
}

int findlength(node* slow,node* fast){
	int cnt=1;
	fast=fast->next;
	while(slow!=fast){
		cnt++;
		fast=fast->next;
	}
	return cnt;
}

// T.C- O(n)  S.C- O(1)
int floydcyclelength(node* head){
	if(head==nullptr){
		return 0;
	}
	
	node* slow=head, *fast=head;
	
	while(fast!=nullptr && fast->next!=nullptr){
		
		fast=fast->next->next;
		slow=slow->next;
		
		if(fast==slow){
			return findlength(slow,fast);
		}
	}
	return 0;
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
	
	// Create a hard-coded linked list:
    // 10 -> 20 -> 30 -> 40 -> 50 -> 60
	node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    head->next->next->next->next->next = new node(60);
    
    head->next->next->next->next->next->next = head;
    
    print(head);
    cout<<"length is->"<<floydcyclelength(head)<<endl;
	
}
