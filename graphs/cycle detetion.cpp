#include <bits/stdc++.h>
using namespace std;

class UnDirGraph{
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
		
		bool bfsTraversal(int node){
			unordered_map<int,bool> visited;
			unordered_map<int,int> parent;
			
			visited[node]=1;
			parent[node]=-1;
			
			queue<int> q;
			q.push(node);
			
			while(!q.empty()){
				int front=q.front();
				q.pop();
				
				for(auto neighbour:adj_list[front]){
					if(visited[neighbour]==true && neighbour!=parent[front]){
						return 1;
					}
					else if(!visited[neighbour]){
						q.push(neighbour);
						visited[neighbour]=1;
						parent[neighbour]=front;
					}
				}
			}
			return 0;
		}
		
		bool isCyclicDfs(int node,unordered_map<int,bool>& visited,unordered_map<int,int>& parent){
			
			visited[node]=1;
			
			for(auto neighbour:adj_list[node]){
				if(visited[neighbour]==true && neighbour!=parent[node]){
					return 1;
				}
				else if(!visited[neighbour]){
					parent[neighbour]=node;
					bool CyclicDetected = isCyclicDfs(neighbour,visited,parent);
					if(CyclicDetected){
						return true;
					}
				}
			}
			return 0;
		}
		
		void dfsTraversal(int node){
			unordered_map<int,bool> visited;
			unordered_map<int,int> parent;
			parent[node]=-1;
			
			bool ans=isCyclicDfs(node,visited,parent);
			
			if(ans){
				cout<<"The graph is a Undirected and cyclic proved by using dfsTraversal "<<endl;
				return;
			}
			cout<<"The graph is a Undirected but not cyclic proved by using dfsTraversal "<<endl;
		}
		
};


int main(){
	
	UnDirGraph g;
	
	g.add_edge(1,2);
	g.add_edge(2,3);
	g.add_edge(2,4);
	g.add_edge(4,5);
	g.add_edge(5,6);
	g.add_edge(5,7);
	g.add_edge(6,8);
	g.add_edge(7,8);
	g.add_edge(8,9);
	
	g.printAdj_List();
	cout<<endl;
	
	int s=1;
	cout << "DFS from source: " << s << endl;
	
	if(g.bfsTraversal(s)){
		cout<<"The graph is a Undirected and cyclic proved by using bfsTraversal "<<endl;
	}
	else{
		cout<<"The graph is a Undirected but not cyclic proved by using bfsTraversal "<<endl;
	}
	cout<<endl;
	
	g.dfsTraversal(s);
	
	
}
