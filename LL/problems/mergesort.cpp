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

void print(node* head){
	node* temp=head;
	while(temp!=nullptr){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

//TC:-O(nlogn) SC:-O(n)
node* mergeSortUsingArray(node* head){
	if(head==nullptr){
		return head;
	}
	vector<int> v;
	node* temp=head;
	while(temp!=nullptr){//O(n)
		v.push_back(temp->data);
		temp=temp->next;
	}
	
	sort(v.begin(),v.end()); //O(nlogn)
	temp=head;
	int i=0;
	while(temp!=nullptr){//O(n)
		temp->data=v[i];
		temp=temp->next;
		i++;
	}
	return head;
}


node* middle(node* head){
	node* slow=head;
	node* fast=head->next;
	
	while(fast!=nullptr && fast->next!=nullptr){
		fast=fast->next->next;
		slow=slow->next;
	}
	
	return slow;
}

node* merge(node* l1,node* l2){
	if(l1==nullptr){
		return l2;
	}
	if(l2==nullptr){
		return l1;
	}
	
	node* temp1=l1;
	node* temp2=l2;
	
	node* ans=new node(-1);
	node* temp=ans;
	
	while(temp1!=nullptr && temp2!=nullptr){
		if(temp1->data <= temp2->data){
			temp->next=temp1;
			temp1=temp1->next;
		}
		else{
			temp->next=temp2;
			temp2=temp2->next;
		}
		temp=temp->next;
	}
	
	temp->next= (temp1!=nullptr)? temp1 : temp2;
	ans=ans->next;
	return ans;
}

//TC:-O(nlogn) SC:-O(logn)
node* mergeSort(node* head){
	if(head==nullptr || head->next==nullptr){
		return head;
	}
	
	node* mid=middle(head);
	
	node* left=head;
	node* right=mid->next;
	mid->next=nullptr;
	
	//left wala part
	cout<<"left wala->";
	print(left);
	
	//right wala part
	cout<<"right wala->";
	print(right);
	
	left=mergeSort(left);
	right=mergeSort(right);
	
	cout<<"merge kardo"<<endl;
	return merge(left,right);
}




int main(){
	
	node* head=new node(9);
	node* n1=new node(3);
	node* n2=new node(1);
	node* n3=new node(6);
	node* n4=new node(5);
	node* n5=new node(7);
	node* n6=new node(4);
	
	head->next=n1;
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;
	
	print(head);
	
	head=mergeSortUsingArray(head);
	print(head);
}
