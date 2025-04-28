#include <iostream>
using namespace std;

void array(int ar1[],int n,int ar2[],int m){
	int num=0;
	for(int i=0;i<n;i++){
		num=ar1[i];
		for(int j=0;j<m;j++){
			if(num==ar2[j]){
				cout<<num;
				ar2[j]=INT_MIN;
				break;
			}
		}
	}
}

int main(){
	
	int n;
	cout<<"enter the size of n:";
	cin>>n;
	int m;
	cout<<"enter the size of m:";
	cin>>m;
	int ar1[100]={1,3,2,3,6,1};
	int ar2[100]={2,4,1,7,9,1};
	array(ar1,n,ar2,m);
	
	
	
	return 0;
}
