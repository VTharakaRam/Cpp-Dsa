#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printsumrow(int ar[][4],int row){
	for(int i=0;i<row;i++){
		int sum=0;
		for(int j=0;j<4;j++){
			sum+=ar[i][j];
		}
		cout<<"sum of "<<i<<" row is:"<<sum<<endl;
	}
}

void printsumcol(int ar[][4],int row){
	for(int j=0;j<4;j++){
		int sum=0;
		for(int i=0;i<row;i++){
			sum+=ar[i][j];
		}
		cout<<"sum of "<<j<<" column is:"<<sum<<endl;
	}
}


int main(){
	
	int arr[3][4]={
	{4,3,4,8},
	{5,6,8,7},
	{6,8,3,7}
	};
	
	printsumrow(arr,3);
	cout<<endl;
	printsumcol(arr,3);
	
	return 0;
}
