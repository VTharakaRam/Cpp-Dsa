	#include <bits/stdc++.h>
using namespace std;

class Graph{
	unordered_map<int,set<pair<int,int>>> adj_list;
	int edges;
	int vertices;
	
	public:
		
		Graph(int u,int v){
			this->edges=u;
			this->vertices=v;
		}
		
		void add_edge(int u,int v,int weight){
			adj_list[u].insert({v,weight});
			adj_list[v].insert({u,weight});
		}
		
		void printAdj_list(){
			cout<<"Printing Adjacency List of Unirected Weighted Graph"<<endl;
			for(auto i:adj_list){
				cout<<i.first<<" -> ";
				for(auto j:i.second){
					cout<<"("<<j.first<<" , "<<j.second<<")"<<" ";
				}
				cout<<endl;
			}
			cout<<endl;
		}
		
		void prims_algo(int src){
			vector<int> key(vertices,INT_MAX);
			vector<bool> mst(vertices,0);
			vector<int> parent(vertices,-1);
			
			key[src]=0;
			
			for(int i=0;i<vertices;i++){
				int u;
				int mini=INT_MAX;
				for(int j=0;j<vertices;j++){
					if(!mst[j] && (key[j]<mini)){
						u=j;
						mini=key[j];
					}
				}
				
				mst[u]=1;
				
				for(auto k:adj_list[u]){
					if(!mst[k.first] && k.second<key[k.first]){
						key[k.first]=k.second;
						parent[k.first]=u;
					}
				}
			}
			
			for(int i=0;i<vertices;i++){
				if(parent[i]!=-1){
					cout<<parent[i]<<"-> "<<i<<"->"<<key[i]<<endl;
				}
			}
		}
		
};

int main(){
	
	int v=5;
	int e=6;
	
	cout<<"No.of edges and vertices are "<<e<<" and "<<v<<"."<<endl;
	
	Graph g(e,v);
	
	g.add_edge(0,1,2);
	g.add_edge(0,3,6);
	g.add_edge(1,2,3);
	g.add_edge(1,4,5);
	g.add_edge(2,4,7);
	g.add_edge(1,3,8);
	
	g.printAdj_list();
	
	g.prims_algo(0);
	
	
	
}
