#include <bits/stdc++.h>
using namespace std;



int main(){
	
	
	pair<int,int> p={1,2};
	
	cout<<p.first<<" "<<p.second<<endl;
	
	p =make_pair(34,7);
	cout<<p.first<<" "<<p.second<<endl;
	
	
	pair<int,int>p1=p;
	p1={898,2178};
	cout<<p1.first<<" "<<p1.second<<endl;
	cout<<p.first<<" "<<p.second<<endl;
	
	pair<int,int>&p2=p1;
	p1={8,21781213};
	cout<<p2.first<<" "<<p2.second<<endl;
	cout<<p1.first<<" "<<p1.second<<endl;
	
		
}
