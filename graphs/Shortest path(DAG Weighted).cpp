#include <bits/stdc++.h>
using namespace std;

//directed acyclic weighted graph
class Graph{
	
	unordered_map<int,set<pair<int,int>>> adj_list;
	public:
		
		void add_edge(int u,int v,int weight){
			adj_list[u].insert({v,weight});
		}
		
		void printAdj_list(){
			cout<<"Printing Adjacency List of Directed Acyclic Weighted Graph"<<endl;
			for(auto i:adj_list){
				cout<<i.first<<" -> ";
				for(auto j:i.second){
					cout<<"("<<j.first<<" , "<<j.second<<")"<<" ";
				}
				cout<<endl;
			}
			cout<<endl;
		}
		
		void topo(int node,unordered_map<int,bool> &visited,stack<int> &s){
			visited[node]=1;
			
			for(auto neighbour:adj_list[node]){
				if(!visited[neighbour.first]){
					topo(neighbour.first,visited,s);
				}
			}
			
			s.push(node);
		}
		
		void shortestPath(int src,vector<int> &dist,stack<int> &s){
			
			dist[src]=0;
			
			while(!s.empty()){
				int top=s.top();
				s.pop();
				
				if(dist[top]!=INT_MAX){
					for(auto i:adj_list[top]){
						int a=i.second+dist[top];
						if(a<dist[i.first]){
							dist[i.first]=a;
						}
					}
				}
			}
			cout<<endl;
		}
};

int main(){
	
	Graph g;
	
	int v=6;
	int e=9;
	
	cout<<"No.of edges and vertices are "<<e<<" and "<<v<<"."<<endl;
	
	g.add_edge(0,1,5);
	g.add_edge(0,2,3);
	g.add_edge(1,2,2);
	g.add_edge(1,3,6);
	g.add_edge(2,3,7);
	g.add_edge(2,4,4);
	g.add_edge(2,5,2);
	g.add_edge(3,4,-1);
	g.add_edge(4,5,-2);
	
	g.printAdj_list();
	cout<<endl;
	
	unordered_map<int,bool> visited;
	stack<int> s;
	
	for(int i=0;i<v;i++){
		if(!visited[i]){
			g.topo(i,visited,s);
		}
	}
	
	vector<int> dist(v,INT_MAX);
	
	int src=1;
	cout << " source is : " << src << endl;
	g.shortestPath(src,dist,s);
	
	cout<<"Distance w.r.t src "<<src<<" to every vertex is:"<<endl;
	
	for(auto i=0;i<dist.size();i++){
		if(dist[i]==INT_MAX){
			cout<<"infinite"<<" ";
		}
		else{
			cout<<dist[i]<<" ";
		}
	}
	cout<<endl;
	cout<<endl;
	
	
}
