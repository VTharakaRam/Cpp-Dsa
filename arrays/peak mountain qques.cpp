#include <iostream>
using namespace std;

int peak(int ar[],int n){
	int s=0,e=n-1;
	int mid=s+(e-s)/2;
	int ans=0;
	while(s<e){
		if(ar[mid]<ar[mid+1]){
			s=mid+1;
			ans=mid+1;
		}
		else if(ar[mid]>ar[mid+1]){
			e=mid;
		}
        mid=s+(e-s)/2;
	}
	return ans;
	
}

int main(){
	
	
	
	int a[6]={0,9,7,4,3,1};
	
	cout<<peak(a,6)<<endl;
	
	return 0;
}
