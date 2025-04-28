#include <iostream>
#include <vector>
using namespace std;

void bubblesort(vector<int> &a,int n){
	if(n==0 || n==1){
		return;
	}
	for(int i=0;i<n-1;i++){
		if(a[i+1]<a[i]){
			swap(a[i+1],a[i]);
		}
	}
	bubblesort(a,n-1);
}

int print(vector<int> &a){
	for(auto i:a){
		cout<<i<<" ";
	}
	cout<<endl;
}


int main(){
	
	vector<int> v={18,8,3,10,9};
	int n=v.size();
	print(v);
	
	bubblesort(v,n);
	cout<<endl;
	
	print(v);
	
	
}
