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
			
			while(!q.empty()){
				
				int front=q.front();
				cout<<front<<" ";
				q.pop();
				
				for(auto neighbour:adj_list[front]){
					indegree[neighbour]--;
					if(indegree[neighbour]==0){
						q.push(neighbour);
					}
				}
			}
			cout<<endl;
		}
};

int main(){
	
	Graph g;
	
	g.add_edge(1,2);
	g.add_edge(2,4);
	g.add_edge(3,2);
	
	g.kahnsAlgorithm();
	
	Graph gh;
	gh.add_edge(1,3);
	gh.add_edge(1,2);
	gh.add_edge(2,5);
	gh.add_edge(3,5);
	gh.add_edge(5,4);
	
	gh.kahnsAlgorithm();
	
}
