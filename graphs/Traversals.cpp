#include <bits/stdc++.h>
using namespace std;


//Graph is undirected
class Graph{
	unordered_map<int,list<int>> adj_list;
	
	public:
	void add_edge(int u,int v){
		adj_list[u].push_back(v);
		adj_list[v].push_back(u);
	}
	
	void printAdj_List(){
		cout<<"Printing Adjacent List "<<endl;
		for(auto i:adj_list){
			cout<<i.first<<" -> ";
			for(auto j:i.second){
				cout<<j<<" ";
			}
			cout<<endl;
		}
	}
	
	void bfsTraversal(int node){
		queue<int> q;
		q.push(node);
		
		unordered_map<int,bool> visited;
		visited[node]=1;
		
		cout<<"Breadth First Search "<<endl;
		while(!q.empty()){
			int frontValue=q.front();
			q.pop();
			cout<<frontValue<<" ";
			
			for(auto i:adj_list[frontValue]){
				if(!visited[i]){
					q.push(i);
					visited[i]=1;
				}
			}
		}
		cout<<endl;
	}
	
	void dfs(int node,unordered_map<int,bool>& visited,unordered_map<int,list<int>> adj_list){
		
		visited[node]=1;
		cout<<node<<" ";
		
		for(auto i:adj_list[node]){
			if(!visited[i]){
				dfs(i,visited,adj_list);
			}
		}
	}
	
	void dfsTraversal(int node){
		unordered_map<int,bool> visited;
		cout<<"Depth First Search Traversal "<<endl;
		dfs(node,visited,adj_list);
		cout<<endl;
	}
	
};

int main(){
	
	Graph g;
	
	g.add_edge(0,3);
	g.add_edge(3,1);
	g.add_edge(1,2);
	g.add_edge(1,4);
	
	int k=0;
	cout << "DFS from source: " << k << endl;
	//Traversal starting with 0
	g.bfsTraversal(k);
	
	g.dfsTraversal(k);
	
	Graph gh;
	gh.add_edge(1,2);
	gh.add_edge(1,0);
	gh.add_edge(2,0);
	gh.add_edge(2,3);
	gh.add_edge(2,4);
	
	int s=1;
	cout << "DFS from source: " << s << endl;
	
	gh.dfsTraversal(s);
		
	
	
}
