#include <iostream>
using namespace std;

int binarysearch(int ar[],int size,int key){
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	while(start<=end){
		if(key==ar[mid]){
			return mid;
		}
		//go to right wala part
		if(key>ar[mid]){
			start=mid+1;
		}
		//go to left wala part
		else{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return -1;
}


int main(){
	
	int num1[6]={3,5,7,12,23,28};
	int num2[8]={2,6,9,13,19,23,28};
	
	int scr1=binarysearch(num1,6,12);
	cout<<"the index value is:"<<scr1<<endl;
	int scr2=binarysearch(num2,8,30);
	cout<<"the index value is:"<<scr2<<endl;
	
	return 0;
}
