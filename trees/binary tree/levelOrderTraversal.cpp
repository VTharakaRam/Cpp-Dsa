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


node* binaryTree(node* root){
	cout<<"enter the data->";
	int data;
	cin>>data;
	root=new node(data);
	
	if(data==-1){
		return NULL;
	}	
	
	cout<<"enter the element left of "<<data<<endl;
	//root->left=
	root->left=binaryTree(root);
	cout<<"enter the element right of "<<data<<endl;
	//root->right=
	root->right=binaryTree(root);
	
	//	cout<<"root->"<<root->data<<"->"<<endl;
	return root;
}

void levelOrderTraversal(node* root){
	stack<node*> s;
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	cout<<endl;
	cout<<"level order traversal->>"<<endl;
	while(!q.empty()){
		node* temp=q.front();
		s.push(temp);
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
	cout<<endl;
	cout<<"reversal level order traversal->>";
	while(!s.empty()){
		node* temp=s.top();
		if(temp==NULL){
			cout<<endl;
		}
		else{
			cout<<temp->data<<" ";
		}
		s.pop();
	}
	cout<<endl;
}


int main(){
	
	node* root=NULL;
	
	root=binaryTree(root);
	
	levelOrderTraversal(root);
	
	cout<<endl;
	
	//ReverselevelOrderTraversal();
	
}

