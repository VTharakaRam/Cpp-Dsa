#include <iostream>
using namespace std;

bool ispresent(int ar[][4],int target,int row,int col){
	for(int row=0;row<3;row++){
		for(int col=0;col<4;col++){
			if(ar[row][col]==target){
				return 1;
				break;
			}
		}
	}
	return 0;
}

int main(){
	
	int arr[3][4]={
	{4,3,4,8},
	{5,6,8,7},
	{6,8,3,7}
	};
	cout<<arr[2][1]<<endl;
	cout<<arr[0][0]<<endl;
	
	
	int i,j;
	int a[i][j];
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<"Enter The value at row "<<i<<" and value at column "<<j<<endl;
		    cin>>a[i][j];
		}
	}
    
    
    for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
		    cout<<a[i][j]<<endl;;
		}
		cout<<endl;
	}
	
	int target;
	cout<<"enter the value of target:";
	cin>>target;
	
	if(ispresent(arr,target,3,4)){
		cout<<"target is present"<<endl;
	}
	
	else{
		cout<<"target is not present"<<endl;
	}
	
	return 0;
}
