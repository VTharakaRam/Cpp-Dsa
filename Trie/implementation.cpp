#include <bits/stdc++.h>
using namespace std;

class TrieNode{
	public:
		TrieNode* v[26];
		bool endofWord;
		
		TrieNode(){
			endofWord=false;
			for(int i=0;i<26;i++){
				v[i]=nullptr;
			}
		}
};

class Trie{
	TrieNode* root;
	
	public:
		Trie(){
			root=new TrieNode();
		}
		
		void insertWord(string s){
			TrieNode* node=root;
			for(auto i:s){
				int index=i-'A';
				if(node->v[index]==nullptr){  //if equals to null
					node->v[index]=new TrieNode();
				}
				node=node->v[index];
			}
			node->endofWord=true;
		}
		
		bool search(string s){
			TrieNode* node=root;
			for(auto i:s){
				int index=i-'A';
				//cout<<"index"<<index<<endl;
				if(!node->v[index]){
					return 0;
				}
				node=node->v[index];
			}
			if(node->endofWord==true){
				return 1;
			}
			return 0;
		}
		
		void deletion(string s){
			if(!search(s)){
				cout<<"invalid string given"<<endl;
			}
			else{
				TrieNode* node=root;
				for(auto i:s){
					int index=i-'A';
					node=node->v[index];
				}
				node->endofWord=false;
				cout<<"deletion done"<<endl;
			}
		}
		
		bool startsWith(string prefix){
        	TrieNode* node = root;
        	for (char c : prefix) {
            	int index = c - 'A';
            	if (!node->v[index]) {
                	return false;
            	}
            	node = node->v[index];
        	}
        	return true;
    	}	
};

void isFound(Trie* h,string s){
	if(h->search(s)){
		cout<<"the string "<<s<<" is found"<<endl;
	}
	else{
		cout<<"the string "<<s<<" is not found"<<endl;
	}
}

void isFoundPrefix(Trie* h,string prefix){
	if(h->startsWith(prefix)){
		cout<<"the given prefix "<<prefix<<" is found"<<endl;
	}
	else{
		cout<<"the given prefix "<<prefix<<" is not found"<<endl;
	}
}

int main(){
	
	Trie* t=new Trie;
	string s="ABCDEF";
	t->insertWord(s);
	
	isFound(t,s);
	
	t->insertWord("TIME");
	t->insertWord("WORD");
	t->insertWord("WORDS");
	
	isFound(t,"TIME");
	isFound(t,"TIM");
	isFound(t,"LORD");
	
	
	t->deletion("TIM");
	t->deletion("WORDS");
	
	isFound(t,"WORDS");
	
	isFoundPrefix(t,"WI");
	isFoundPrefix(t,"TIM");
	
	
	
	return 0;
}
