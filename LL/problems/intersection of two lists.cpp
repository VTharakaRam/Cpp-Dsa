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

//T.C:-O(len(h1)+len(h2)) S.C:-O(len(h1))
bool intersection(node* head1,node* head2){
	if(head1==nullptr || head2==nullptr){
		return 0;
	}
	unordered_map<node*,int> m;
	node* temp=head1;
	while(temp!=nullptr){
		m[temp]=1;
		temp=temp->next;
	}
	
	temp=head2;
	while(temp!=nullptr){
		if(m[temp]==1){
			return 1;
		}
		temp=temp->next;
	}
	return 0;
}

bool collision(node* l1,node* l2,int d){
	while(d){
		d--;
		l2=l2->next;
	}
	while(l1!=nullptr && l2!=nullptr){
		if(l1==l2){
			return 1;
		}
		l1=l1->next;
		l2=l2->next;
	}
	return 0;
}

//T.C:-O(len(h1)+2*len(h2)) S.C:-O(1)
bool getIntersectionNode(node* head1,node* head2){
	if(head1==nullptr || head2==nullptr){
		return 0;
	}
	
	int n1=0,n2=0;
	node* temp1=head1;
	node *temp2=head2;
	while(temp1!=nullptr){
		temp1=temp1->next;
		n1+=1;
	}
	while(temp2!=nullptr){
		temp2=temp2->next;
		n2+=1;
	}
	
	if(n2>n1){
		return collision(head1,head2,n2-n1);
	}
	return collision(head2,head1,n1-n2);
}

//T.C:-O(len(h1)+len(h2)) S.C:-O(1)
bool isintersected(node* head1,node* head2){
	if(head1==nullptr || head2==nullptr){
		return 0;
	}
	node* temp1=head1,*temp2=head2;
	while(temp1!=temp2){
		temp1=(temp1==nullptr)? head2:temp1->next;
		temp2=(temp2==nullptr)? head1:temp2->next;
		
		if(temp1==nullptr && temp2==nullptr){
			return 0;
		}
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

void intersected(bool c){
	if(c){
		cout<<"intersected"<<endl;
	}
	else{
		cout<<"not intersected"<<endl;
	}
}


int main(){
	
	node* head1=new node(1);
	node* n2=new node(0);
	node* n3=new node(8);
	node* n4=new node(6);
	node* n5=new node(4);
	node* n6=new node(5);
	node* n7=new node(3);
	
	head1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;
	n6->next=n7;
	
	node* head2=new node(10);
	node* n8=new node(14);
	node* n9=new node(56);
	
	
	head2->next=n8;
	n8->next=n9;
	n9->next=n4;
	
	cout<<"printing first list "<<endl;
	print(head1);
	
	cout<<"printing second list "<<endl;
	print(head2);
	
	intersected(isintersected(head1,head2));
	
}
