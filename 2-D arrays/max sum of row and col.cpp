#include <iostream>
using namespace std;

int maxsumrow(int ar[][4],int row){
	int n=INT_MIN;
	int rowindex=-1;
	for(int i=0;i<row;i++){
		int sum=0;
		for(int j=0;j<4;j++){
			sum+=ar[i][j];
		}
		if(n<sum){
			n=sum;
			rowindex=i;
		}
		cout<<"sum of "<<i<<" row is:"<<sum<<endl;
	}
	cout<<"maximum sum in a row is "<<n<<endl;
	return rowindex;
}



int maxsumcol(int ar[][4],int row){
	int n=INT_MIN;
	int colindex=-1;
	for(int j=0;j<4;j++){
		int sum=0;
		for(int i=0;i<row;i++){
			sum+=ar[i][j];
		}
		if(n<sum){
			n=sum;
			colindex=j;
		}
		cout<<"sum of "<<j<<" column is:"<<sum<<endl;
	}
	cout<<"maximum sum in a column is "<<n<<endl;
	return colindex;
}


int main(){
	
	int arr[3][4]={
	{4,3,4,8},
	{5,6,8,7},
	{6,8,3,7}
	};
	
	int ans1=maxsumrow(arr,3);
	cout<<"maximum sum of row index is "<<ans1<<endl;
	cout<<endl;
	
	int ans2=maxsumcol(arr,3);
	cout<<"maximum sum at column index is "<<ans2<<endl;
	
	
	
	return 0;
}
