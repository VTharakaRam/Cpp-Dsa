#include <iostream>
#include <queue>
#include <vector>
using namespace std;


class node{
	public:
		int data;
		node* left;
		node* right;
		
		node(int data){
			this->data=data;
			this->left=NULL;
			this->right=NULL;
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

vector<vector<int>> val(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	
	vector<vector<int>> v;
	vector<int> a;
	
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		
		if(temp==NULL){
			v.push_back(a);
			a.erase(a.begin(),a.end());
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			a.push_back(temp->data);
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
	return v;
}


void print(vector<vector<int>> v){
	int n=v.size();
	for(int i=0;i<n;i++){
		for(int j=0;j<v[i].size();j++){
			int temp=v[i][j];
			cout<<temp<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}


int main(){
	
	node* root;
	
	root=binaryTree(root);
	
	print(val(root));
	
}
