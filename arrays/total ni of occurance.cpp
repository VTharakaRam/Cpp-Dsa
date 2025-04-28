#include <iostream>
using namespace std;

int firstOcc(int ar[],int size,int num){
	int s=0,e=size-1;
	int mid=s+(e-s)/2;
	int ans=0;
	while(s<=e){
		if(num==ar[mid]){
			ans=mid;
			e=mid-1;
		}
		else if(num>ar[mid]){
			s=mid+1;
		}
		else if(num<ar[mid]){
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}


int lastOcc(int ar[],int size,int num){
	int s=0,e=size-1;
	int mid=s+(e-s)/2;
	int ans=0;
	while(s<=e){
		if(num==ar[mid]){
			ans=mid;
			s=mid+1;
		}
		else if(num>ar[mid]){
			s=mid+1;
		}
		else if(num<ar[mid]){
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}



int main(){
	
	
	int a[11]={1,2,5,5,5,5,5,5,5,6,6};
	int p=firstOcc(a,11,5);
	int q=lastOcc(a,11,5);
	cout<<"first occurance is:"<<p<<endl;
	cout<<"second occurance is:"<<q<<endl;
	cout<<"total number occurance is:"<<q-p+1<<endl;
	
	
	return 0;
}
