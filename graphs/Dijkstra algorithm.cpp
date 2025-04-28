#include <bits/stdc++.h>
using namespace std;

class Graph{
	unordered_map<int,set<pair<int,int>>> adj_list;
	vector<int> dis;
	
	public:
		
		Graph(int v){
			for(int i=0;i<v;i++){
				dis.push_back(INT_MAX);
			}
		}
		
		void add_edge(int u,int v,int weight,int direction){
			//if direction is 1 means both sided
			adj_list[u].insert({v,weight});
			if(direction){
				adj_list[v].insert({u,weight});
			}
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
		
		void Dijkstra_algo(int src){
			set<pair<int,int>> s;
			
			s.insert({0,src});
			dis[src]=0;
			
			while(!s.empty()){
				int front=s.begin()->second;
				s.erase(s.begin());
				
				for(auto neighbour:adj_list[front]){
					int a=dis[front] + neighbour.second;
					if(a < dis[neighbour.first]){
						s.erase({dis[neighbour.first],neighbour.first});
						dis[neighbour.first]=a;
						s.insert({a,neighbour.first});	
					}
				}
			}
		}
		
		void getDistance(int src){
			cout<<"Printing distances w.r.t source "<<src<<" is "<<endl;
			for(auto i:dis){
				if(i==INT_MAX){
					cout<<"Infinite"<<" ";
				}
				else{
					cout<<i<<" ";	
				}
			}
			cout<<endl;
		}
};


int main(){
	
	//graph
	int v=4;
	int e=5;
	
	cout<<"No.of edges and vertices are "<<e<<" and "<<v<<"."<<endl;
	
	Graph g(v);
	
	
	g.add_edge(1,0,5,1);
	g.add_edge(1,2,9,1);
	g.add_edge(1,3,2,1);
	g.add_edge(2,0,8,1);
	g.add_edge(3,2,6,1);
	
	g.printAdj_list();
	
	int src=0;
	cout << " source is : " << src << endl;
	
	
	
	g.Dijkstra_algo(src);
	
	g.getDistance(src);
	cout<<endl;
	
	
	//graph
	int vertices=5;
	int edges=7;
	cout<<"No.of edges and vertices are "<<edges<<" and "<<vertices<<"."<<endl;
	
	Graph gh(vertices);
	
	gh.add_edge(0,1,7,1);
	gh.add_edge(0,2,1,1);
	gh.add_edge(0,3,2,1);
	gh.add_edge(1,2,3,1);
	gh.add_edge(1,3,5,1);
	gh.add_edge(1,4,1,1);
	gh.add_edge(3,4,7,1);
	
	gh.printAdj_list();
	
	gh.Dijkstra_algo(0);
	
	gh.getDistance(0);
	cout<<endl;
	
	
	//graph
	int vr=6;
	int ed=9;
	cout<<"No.of edges and vertices are "<<ed<<" and "<<vr<<"."<<endl;
	
	Graph node(vr);
	
	node.add_edge(0,1,5,0);
	node.add_edge(0,2,3,0);
	node.add_edge(1,2,2,0);
	node.add_edge(1,3,6,0);
	node.add_edge(2,3,7,0);
	node.add_edge(2,4,4,0);
	node.add_edge(2,5,2,0);
	node.add_edge(3,4,-1,0);
	node.add_edge(4,5,-2,0);
	
	node.printAdj_list();
	
	node.Dijkstra_algo(1);
	
	node.getDistance(0);
	cout<<endl;
	
}
