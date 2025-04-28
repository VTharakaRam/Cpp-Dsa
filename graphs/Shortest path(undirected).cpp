#include <bits/stdc++.h>
using namespace std;

//undirected graph
class Graph{
	
	unordered_map<int,set<int>> adj_list;
	public:
		
		void add_edge(int u,int v){
			adj_list[u].insert(v);
			adj_list[v].insert(u);
		}
		
		void printAdj_list(){
			cout<<"Printing Adjacency List of Undirected Graph"<<endl;
			for(auto i:adj_list){
				cout<<i.first<<" -> ";
				for(auto j:i.second){
					cout<<j<<" ";
				}
				cout<<endl;
			}
			cout<<endl;
		}
		
		void ShortPath(int src,int des){
			unordered_map<int,bool> visited;
			unordered_map<int,int> parent;
			
			queue<int> q;
			q.push(src);
			
			parent[src]=-1;
			visited[src]=1;
			
			while(!q.empty()){
				int front=q.front();
				q.pop();
				
				for(auto i:adj_list[front]){
					if(!visited[i]){
						q.push(i);
						visited[i]=1;
						parent[i]=front;
					}
				}
			}
			
			vector<int> v;
			int node=des;
			v.push_back(node);
			
			while(node!=src){
				node=parent[node];
				v.push_back(node);
			}
			reverse(v.begin(),v.end());
			for(int i=0;i<v.size();i++){
				if(i==v.size()-1){
					cout<<v[i]<<endl;
					return;
				}
				cout<<v[i]<<"->";
			}
			cout<<endl;
		}
};

int main(){
	
	Graph g;
	
	g.add_edge(1,2);
	g.add_edge(1,3);
	g.add_edge(1,4);
	g.add_edge(2,7);
	g.add_edge(3,8);
	g.add_edge(4,5);
	g.add_edge(5,6);
	g.add_edge(6,8);
	g.add_edge(7,8);
	
	g.printAdj_list();
	
	int s=1;
	
	int k=8;
	
	cout<<"Source in the graph ->"<<s<<endl;
	cout<<"Destination in the graph ->"<<k<<endl;
	
	g.ShortPath(s,k);
	
	
}
