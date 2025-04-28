#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int> &v,int s,int e){
	int pivot=v[s];
	int cnt=0;
	for(int i=s;i<=e;i++){
		if(pivot>v[i]){
			cnt++;
		}
	}
	int mainIndex=s+cnt;
	swap(v[s],v[mainIndex]);
	int i=0,j=e;
	while(i<mainIndex && j>mainIndex){
		while(v[i]<pivot){
			i++;
		}
		while(v[j]>pivot){
			j--;
		}
		
		if(i<mainIndex && j>mainIndex){
			swap(v[i++],v[j--]);
		}
	}
	return mainIndex;
}


void quickSort(vector<int> &v,int s,int e){
	if(s>=e){
		return;
	}
	//partition create kardo
	int p=partition(v,s,e);
	
	//left wala part
	quickSort(v,s,p-1);
	
	//right wala part
	quickSort(v,p+1,e);
}


int main(){
	
	vector<int> a={8,2,9,9,4,5};
	
	quickSort(a,0,a.size()-1);
	
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
