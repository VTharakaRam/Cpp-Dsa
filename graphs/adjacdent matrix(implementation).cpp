#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Graph{
	
	vector<vector<T>> matrix;
		
	public:
		
		Graph(int n=0){
			matrix=vector<vector<T> >(n,vector<T>(n, 0));
		}
		
		void add_edge(T u,T v){
			matrix[u][v]=1;
			matrix[v][u]=1;
		}
		
		void print(){
			int n=matrix.size();
			if(n==0){
				cout<<"Size of Matrix is 0."<<endl;
			}
			
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					cout<<matrix[i][j]<<" ";
				}
				cout<<endl;
			}
		}
};


int main(){
	
	int n;
	cout<<"Enter the size of matrix: ";
	cin>>n;
	
	Graph<int> g(n);
	
	g.add_edge(1,2);
	g.add_edge(0,2);
	g.add_edge(1,3);
	g.add_edge(2,3);
	
	g.print();
	
	
}
