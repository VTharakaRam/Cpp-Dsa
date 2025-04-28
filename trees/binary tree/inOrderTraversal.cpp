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


node* binaryTree(){
	cout<<"enter the data->";
	int data;
	cin>>data;
	
	if(data==-1){
		return NULL;
	}
	node* root=new node(data);
	//return root;	
	
	cout<<"enter the element left of "<<data<<endl;
	//root->left=
	root->left=binaryTree();
	cout<<"enter the element right of "<<data<<endl;
	//root->right=
	root->right=binaryTree();
	
	//	cout<<"root->"<<root->data<<"->"<<endl;
	return root;
}

void inOrderTraversal(node* root){
	node* temp=root;
	if(temp==NULL){
		return;
	}
	//left wala part
	inOrderTraversal(root->left);
	
	cout<<root->data<<" ";
	//right wala part
	inOrderTraversal(root->right);
}


int main(){
	
	node* root=NULL;
	
	root=binaryTree();
	
	inOrderTraversal(root);
	
	
}
