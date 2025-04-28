#include <iostream>
using namespace std;

int firstOccurance(int ar[],int size,int num){
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

int lastOccurance(int ar[],int size,int num){
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
    
//    pair<int,int> p;
//    p.first=firstOccurance(a,11,5);
//    p.second=lastOccurance(a,11,5);
//    return p;
	
	int scr1=firstOccurance(a,11,5);
	int scr2=lastOccurance(a,11,5);
	cout<<"first occurance is:"<<scr1<<endl;
	cout<<"second occurance is:"<<scr2<<endl;
	
	
	return 0;
}
