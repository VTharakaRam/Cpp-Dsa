#include <iostream>
#include <map>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int data){
			this->data=data;
			this->next=nullptr;
		}
};

// T.C- O(n)  S.C- O(n)
bool detectcycle(Node* head){
	if(head==nullptr){
		return false;
	}
	
	Node* temp=head;
	map<Node*,bool> vis;
	
	
	while(temp!=nullptr){
		if(vis[temp]==1){
			return 1;
		}
		vis[temp]=1;
		temp=temp->next;
	}
	return 0;
}

// T.C- O(n)  S.C- O(1)
void floydcycle(Node* head){
	if(head==nullptr){
		cout<<"head is empty and a cycle detected "<<endl;
		return;
	}
	
	Node* slow=head, *fast=head;
	
	while(fast!=nullptr && fast->next!=nullptr){
		
		fast=fast->next->next;
		slow=slow->next;
		
		if(fast==slow){
			cout<<"cycle detected "<<endl;
			return;
		}
	}
	cout<<"cycle not detected "<<endl;
	return;
}



void print(Node* head){
	if(detectcycle(head)){
		cout<<"cycle detected "<<endl;
		return;
	}
	cout<<"cycle not detected "<<endl;
}


int main(){
	
	// Create a hard-coded linked list:
    // 10 -> 20 -> 30 -> 40 -> 50 -> 60
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    
    head->next->next->next->next = head;
    
    print(head);
	
	floydcycle(head);
	
}
