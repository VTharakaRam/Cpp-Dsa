#include<iostream>
using namespace std;

class stackLL{
	struct node{
		int data;
		node*next;
		node(int val){
			data=val;
			next=NULL;
		}
	};
		node *top=NULL;

	public:
	void push(int value){
		node* newnode= new node(value);
		newnode->next=top;
		top=newnode;
	}


	void pop(){
		if (top==NULL){
		cout<<"stack is empty"<<endl;
		return;
		}
		node*temp=top;
		top=top->next;
		cout<<temp->data<<"popped"<<endl;
	}

	void display(){
		if(top==NULL){
		cout<<"stack is empty"<<endl;
		return;
		}
		node*temp=top;
		cout<<"elements are"<<endl;
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
};


	
int main(){
	stackLL st;
	int t=0;
	while(t==0){
		cout<<"enter 1 to push"<<endl;
		cout<<"enter 2 to pop"<<endl;
		cout<<"enter 3 to display"<<endl;
		cout<<"enter 4 to exit"<<endl;
		int x;
		cout<<endl;
		cout<<"enter ur choice";
		cin>>x;
		switch(x){
		case 1:
			cout<<"enetr no of elements";
			int n;
			cin>>n;
			for(int i=0;i<n;++i){
				int ele;
				cin>>ele;
				st.push(ele);
			}
			cout<<"done"<<endl;
			break;
		case 2 :
			st.pop();
			break;
		case 3 :
			st.display();
			break;
		case 4 :
			cout<<"exit"<<endl;
			t=1;
			break;
		}
	}
	
	
	return 0;	
}		
