#include <bits/stdc++.h>
using namespace std;


//Graph is directed and should be acyclic graph
//DAG :-Directed Acyclic Graph
class Graph{
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
	
	void topoSort(int node,stack<int>& s,unordered_map<int,bool>& visited){
		visited[node]=1;
		
		for(auto neighbour:adj_list[node]){
			if(!visited[neighbour]){
				topoSort(neighbour,s,visited);
			}
		}
		s.push(node);
	}
	
	void topologicalSort(int node){
		stack<int> s;
		unordered_map<int,bool> visited;
		
		topoSort(node,s,visited);
		
		while(!s.empty()){
			cout<<s.top()<<" ";
			s.pop();
		}
		cout<<endl;
	}
};



int main(){
	
	Graph g;
	g.add_edge(1,2);
	g.add_edge(1,3);
	g.add_edge(2,4);
	g.add_edge(3,4);
	g.add_edge(4,5);
	g.add_edge(5,6);
	g.add_edge(4,6);
	
	g.printAdj_List();
	
	int k=1;
	cout << "DFS from source: " << k << endl;
	g.topologicalSort(k);
	
	
}														
