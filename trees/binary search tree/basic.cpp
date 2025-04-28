#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;
		
		node(int data){
			this->data=data;
			this->left=nullptr;
			this->right=NULL;
		}
};


node* insertBinaryTree(node* root,int d){
	//base case
	if(root==nullptr){
		root=new node(d);
		return root;
	}
	
	
	if(d < root->data){
		root->left=insertBinaryTree(root->left,d);
	}
	else{
		root->right=insertBinaryTree(root->right,d);
	}
	
	return root;
}

void input(node* &root){
	int data;
	cin>>data;
	
	while(data!=-1){
		root=insertBinaryTree(root,data);
		cin>>data;
	}
}

void levelOrderTraversal(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	cout<<endl;
	cout<<"level order traversal->>"<<endl;
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

bool searchBSTrec(node* root,int d){
	if(root==NULL){
		return 0;
	}
	if(root->data==d){
		return 1;
	}
	else if(root->data > d){
		searchBSTrec(root->left,d);
	}
	else{
		searchBSTrec(root->right,d);
	}
}

bool searchBSTitr(node* root,int d){
	node* temp=root;
	while(temp!=nullptr){
		if(temp->data==d){
			return 1;
		}
		else if(temp->data > d){
			temp=temp->left;
		}
		else{
			temp=temp->right;
		}
	}
	return 0;
}

int minValue(node* root){
	node* temp=root;
	while(temp->left!=nullptr){
		temp=temp->left;
	}
	return temp->data;
}

int maxValue(node* root){
	node* temp=root;
	while(temp->right!=NULL){
		temp=temp->right;
	}
	return temp->data;
}

node* deletion(node* &root,int d){
	//assuming given d is present in BST
	if(root==nullptr){
		return NULL;
	}
	if(root->data == d){
		//no childs
		if(root->left==nullptr && root->right==nullptr){
			delete root;
			return nullptr;
		}
		
		//one child
		  //left child
		if(root->left!=nullptr && root->right==nullptr){
			node* temp=root->left;
			delete root;
			return temp;
		}
		  //right child
		else if(root->left==nullptr && root->right!=nullptr){
			node* temp=root->right;
			delete root;
			return temp;
		}
		
		//two child
		if(root->left!=nullptr && root->right!=nullptr){
			int min=minValue(root->right);
			root->right=deletion(root->right,min);
			return root;
		}
	}
	
	else if(root->data < d){
		root->right=deletion(root->right,d);
	}
	
	else{
		root->left=deletion(root->left,d);
	}
	
	return root;
}

int main(){
	
	//          40
	//          / \
	//         35  47
	//         / \   \
	//        12  36  67
	//        / \   \
	//       5   20  39
	
	
	node* d=nullptr;
	
	cout<<"enter data to create BST"<<endl;
	input(d);
	
	levelOrderTraversal(d);
	
	
	int ele;
	cout<<"enter an element to search in BST->";
	cin>>ele;
	
	
	cout<<"searching through recursion->"<<endl;
	if(searchBSTrec(d,ele)){
		cout<<"element found"<<endl;
	}
	else{
		cout<<"element not found"<<endl;
	}
	
	
	cout<<"searching through iterative->"<<endl;
	if(searchBSTitr(d,ele)){
		cout<<"element found"<<endl;
	}
	else{
		cout<<"element not found"<<endl;
	}
	
	cout<<"minimum element is->"<<minValue(d)<<endl;
	
	cout<<"maximum element is->"<<maxValue(d)<<endl;
	
}
