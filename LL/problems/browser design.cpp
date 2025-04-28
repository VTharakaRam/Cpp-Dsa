#include <bits/stdc++.h>
using namespace std;

class node{
	public:
		string data;
		node* next;
		node* back;
		
		node(string data){
			this->data=data;
			this->next=nullptr;
			this->back=nullptr;
		}
};

class browser{
	public:
		node* current;
		
		browser(string homepage){
			current=new node(homepage);
		}
		
		node* visit(string link){
			node* newnode=new node(link);
			current->next=newnode;
			newnode->back=current;
			current=current->next;
			return current;
		}
		
		node* backward(int steps){
			while(steps--){
				if(current->back!=nullptr){
					current=current->back;
				}
				else{
					break;
				}
			}
			return current;
		}
		
		node* forward(int steps){
			while(steps--){
				if(current->next!=nullptr){
					current=current->next;
				}
				else{
					break;
				}
			}
			return current;
		}
};

void print(node* head){
	cout<<"content in the list is "<<head->data<<endl;
}

int main(){
	
	string homepage="google";
	
	browser* b1=new browser(homepage);
	
	b1->visit("insta");
	
	print(b1->current);
	
	b1->visit("whatsapp");
	b1->visit("yt");
	b1->visit("fb");
	b1->visit("twitter");
	
	b1->backward(3);
	print(b1->current);
	
}
