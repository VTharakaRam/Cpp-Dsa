#include <iostream>
#include <vector>
using namespace std;

void arrai(int ar[][4],int row,int col){
	vector<int> v;
	int j=0;
	while(j<col){
		int i=0;
		while(i<row){
			if(j%2==0){
			v.push_back(ar[i][j]);
			i++;
		    }
		    else{
		    	v.push_back(ar[row-i-1][j]);
		    	i++;
			}
		}
		j++;
	}
	for(auto i:v){
		cout<<i<<" ";
	}
}

int main(){
	
	int a[3][4]={{1,3,7,0},{7,8,5,4},{9,6,2,1}};
	
	arrai(a,3,4);
	
	
	
	return 0;
}
