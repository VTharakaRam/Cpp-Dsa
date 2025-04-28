#include <bits/stdc++.h>
using namespace std;

class node{
	public:
	int data;
	node* left;
	node* right;
	
	public:
		node(int data){
			this->data=data;
			this->left=nullptr;
			this->right=nullptr;
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
	
	cout<<"enter the element left of "<<data<<endl;
	//root->left=
	root->left=binaryTree();
	cout<<"enter the element right of "<<data<<endl;
	//root->right=
	root->right=binaryTree();
	
	//	cout<<"root->"<<root->data<<"->"<<endl;
	return root;
}

void mirrorImage(node* root){
	if(root!=nullptr){
		mirrorImage(root->left);
		mirrorImage(root->right);
		
		node* temp=root->left;
		root->left=root->right;
		root->right=temp;
	}
	return;
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
	
	node* root=nullptr;
	
	root=binaryTree();
	
	inOrderTraversal(root);
	cout<<endl;
	
	mirrorImage(root);
	
	inOrderTraversal(root);
	cout<<endl;
	cout<<endl;
	
	return 0;
}
