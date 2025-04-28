#include<bits/stdc++.h>
using namespace std;


int merge(int *arr, int s, int e){
	
	int mid = s+(e-s)/2;
	int inv = 0;
	
	int len1 = mid-s+1;
	int len2 = e-mid;
	
	int *first = new int[len1];
	int *second = new int[len2];
	int mainIndex = s;
	for(int i=0; i<len1; i++){
		first[i] = arr[mainIndex++];
	}
	
	mainIndex = mid+1;
	for(int i=0; i<len2; i++){
		second[i] = arr[mainIndex++];
	}
	
	int index1 = 0;
	int index2 = 0;
	mainIndex = s;
	
	while(index1<len1 && index2 < len2){
		if(first[index1] <= second[index2]){
			arr[mainIndex++] = first[index1++];
		}else{
			arr[mainIndex++] = second[index2++];
			inv += len1 - index1;
			
		}
	}
	
	while(index1 < len1){
		arr[mainIndex++] = first[index1++];
	}
	
	while(index2 < len2){
		arr[mainIndex++] = second[index2++];
	}
	
	delete []first;
    delete []second;
    
    return inv;
	
}

int mergeSort(int *arr, int s, int e){
	if(s>=e){
		return 0;
	}
	
	int mid = s+(e-s)/2;
	int inv = 0;
	
	//left part
	
	
	inv += mergeSort(arr, s, mid);
	
	
	//right part
	
	inv += mergeSort(arr, mid+1, e);

	
	//merge
	
	inv += merge(arr, s, e);
	
	
	return inv;
}

int main(){
	int arr[3] = {3, 1, 2};
	
	int inv = mergeSort(arr, 0, 2);
	
	
	cout<<inv;
	
	return 0;
}
