#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;
		
		node(int data){
			this->data=data;
			right=NULL;
			left=NULL;
		}
};


void tree(node* &root){
	cout<<"enter the root->";
	int data;
	cin>>data;
	root=new node(data);
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		
		cout<<"enter the element left of "<<temp->data<<"->";
		cin>>data;
		if(data!=-1){
			temp->left=new node(data);
			q.push(temp->left);
		}
		cout<<"enter the element right of "<<temp->data<<"->";
		cin>>data;
		if(data!=-1){
			temp->right=new node(data);
			q.push(temp->right);
		}
	}
}

void levelOrderTraversal(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		if(temp==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";		
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}			
		}
	}
}

int main(){
	
	node* root=NULL;
	
	tree(root);
	
	levelOrderTraversal(root);
	//inOrderTraversal(root);
	
	
}
