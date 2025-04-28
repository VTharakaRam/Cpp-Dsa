#include <bits/stdc++.h>
using namespace std;
template<typename t>
class Graph{
	map<t,list<t>> adj_list;
	
	public:
		void add_edge(t u,t v){
			adj_list[u].push_back(v);
			if(u==v){
				return ;
			}
			adj_list[v].push_back(u);
		}
		
		void print(){
			for(auto i:adj_list){
				cout<<i.first<<" -> ";
				for(auto j:i.second){
					cout<<j<<" ";
				}
				cout<<endl;
			}
		}
};

int main(){
	
	Graph<int> g;
	
	g.add_edge(3,1);
	g.add_edge(0,2);
	g.add_edge(2,4);
	g.add_edge(1,4);
	g.add_edge(2,2);
	
	g.print();
	
} 
