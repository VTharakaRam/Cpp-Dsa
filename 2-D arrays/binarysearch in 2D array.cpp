#include <iostream>
using namespace std;

bool binsrh(int ar[][4],int target,int row,int col){
	int s=0,e=(row*col)-1;
	while(s<=e){
		int mid=s+(e-s)/2;
		int ele=ar[mid/col][mid%col];
		if(ele==target){
			return 1;
		}
		else if(ele<target){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	return 0; 
}

int main(){
	
	int arr[4][4]={
	{4,3,4,8},
	{5,6,8,7},
	{6,8,3,7},
	{5,3,8,1}
	};
	
	int target;
	cin>>target;
	
	if(binsrh(arr,target,4,4)){
		cout<<"target is found"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}
	
	
	return 0;
}
