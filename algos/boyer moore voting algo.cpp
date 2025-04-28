#include <bits/stdc++.h>
using namespace std;

int findMajority(vector<int>& v){
	int n=v.size();
	int cnt=0;
	int ele;
	for(int i=0;i<n;i++){
		if(cnt==0){
			ele=v[i];
			cnt++;
		}
		else{
			if(v[i]==ele){
				cnt++;
			}
			else{
				cnt--;
			}
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
		if(v[i]==ele){
			ans++;
		}
	}
	if(ans>n/2){
		return ele;
	}
	return -1;
}

int main(){
	
	vector<int> v={2,2,1,3,1,1,3,1,1};
	cout<<"majority element->"<<findMajority(v)<<endl;
	
}
