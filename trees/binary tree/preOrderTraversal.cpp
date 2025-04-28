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

void preOrderTraversal(node* root){
	node* temp=root;
	
	if(temp==NULL){
		return;
	}
	
	cout<<temp->data<<" ";
	//left wala part
	preOrderTraversal(root->left);
	//right wala part
	preOrderTraversal(root->right);
}

int main(){
	
	node* root=NULL;
	
	root=binaryTree(root);
	
	preOrderTraversal(root);
	
	
}
