#include <iostream>
using namespace std;

bool search1(int ar[][5],int target,int row ,int col){
	int j=0;
	while(j<col){
		int i=0;
		while(i<row){
			int ele=ar[i][j];
			if(ele==target){
				return 1;
				break;
			}
			i++;
		}
		j++;
	}
	return 0;
}

bool search2(int ar[][5],int target,int row,int col){
	//caution to check that matrix is sorted in a row and column ascendingly
	int i=0,j=col-1;
	while(i<row&&j>=0){
		int ele=ar[i][j];
		if(ele==target){
			return 1;
			break;
		}
		else if(ele>target){
			j--;
		}
		else{
			i++;
		}
	}
	return 0;
}

int main(){
	
	int arr[5][5]={
	{1,4,7,11,15},
	{2,5,8,12,19},
	{3,6,9,16,22},
	{10,13,14,17,24},
	{18,21,23,26,30},
	};
	
	int target;
	cin>>target;
	
	cout<<"using search1 function"<<endl;
	if(search1(arr,target,5,5)){
		cout<<"target is found"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}
	cout<<endl;
	
	
	cout<<"using search2 function"<<endl;
	if(search2(arr,target,5,5)){
		cout<<"target is found"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}
	
	
	return 0;
}
