#include <iostream>
using namespace std;

int pivot(int ar[],int n){
	int s=0,e=n-1;
	int num;
	int m=s+(e-s)/2;
	while(s<e){
		if(ar[m]>=ar[0]){
			s=m+1;
		}
		else{
			e=m;
		}
		m=s+(e-s)/2;
	}
	return ar[s];
}

int main(){
	
	int a[6]={7,9,1,3,4,6};
	
	cout<<pivot(a,6)<<endl;
	
	return 0;
}
