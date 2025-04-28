#include <bits/stdc++.h>
using namespace std;


class Graph{
	unordered_map<int,set<int>> adj_list;
	map<int,int> indegree;
	
	public:
		void add_edge(int u,int v){
			adj_list[u].insert(v);
			indegree[v]++;
			if(indegree[u]==0){
				indegree[u]=0;
			}
		}
		
		void kahnsAlgorithm(){
			queue<int> q;
			
			for(auto i:indegree){
				if(i.second==0){
					q.push(i.first);
				}
			}
			int cnt=0;
			while(!q.empty()){
				
				int front=q.front();
				cnt++;
				q.pop();
				
				for(auto neighbour:adj_list[front]){
					indegree[neighbour]--;
					if(indegree[neighbour]==0){
						q.push(neighbour);
					}
				}
			}
			if(cnt==indegree.size()){
				cout<<"The graph is a UnDirected and not cyclic proved by using Kahns Algo "<<endl;
				return;
			}
			cout<<"The graph is a UnDirected and cyclic proved by using Kahns Algo "<<endl;
			return;
		}
};



//DIRECTED GRAPH
class DirGraph{
	unordered_map<int,list<int>> adj_list;
	
	public:
		
		void add_edge(int u,int v){
			adj_list[u].push_back(v);
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
		
		bool isCyclicDfs(int node,unordered_map<int,bool>& visited,unordered_map<int,bool>& dfsvisited){
			visited[node]=1;
			dfsvisited[node]=1;
			
			for(auto neighbour:adj_list[node]){
				if(!visited[neighbour]){
					bool cycleDetected=isCyclicDfs(neighbour,visited,dfsvisited);
					if(cycleDetected){
						return 1;
					}
				}
				else if(dfsvisited[neighbour]){
					return 1;
				}
			}
			dfsvisited[node]=0;
			return 0;
		}
		
		void dfsTraversal(int node){
			unordered_map<int,bool> visited;
			unordered_map<int,bool> dfsvisited;
			
			bool ans=isCyclicDfs(node,visited,dfsvisited);
			if(ans){
				cout<<"The graph is a Directed and cyclic proved by using dfsTraversal "<<endl;
				return;
			}
			cout<<"The graph is a Directed but not cyclic proved by using dfsTraversal "<<endl;
		}
};


int main(){
	
	Graph g;
	
	g.add_edge(1,2);
	g.add_edge(2,4);
	g.add_edge(3,2);
	
	g.kahnsAlgorithm();
	
	
	Graph gh;
	gh.add_edge(1,2);
	gh.add_edge(5,2);
	gh.add_edge(2,3);
	gh.add_edge(3,4);
	gh.add_edge(4,5);
	gh.add_edge(3,5);
	
	gh.kahnsAlgorithm();
	
	
	cout<<endl;
	cout<<endl;
	DirGraph graph;
	graph.add_edge(1,2);
	graph.add_edge(2,3);
	graph.add_edge(2,4);
	graph.add_edge(3,7);
	graph.add_edge(3,8);
	graph.add_edge(8,7);
	graph.add_edge(4,5);
	graph.add_edge(5,6);
	graph.add_edge(6,4);
	
	graph.printAdj_List();
	
	int k=1;
	cout << "DFS from source: " << k << endl;
	graph.dfsTraversal(k);
	
}
