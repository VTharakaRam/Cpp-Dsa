#include <iostream>
using namespace std;

int getmax(int ar[],int size){
	int max=INT_MIN;
	for(int i=0;i<size;i++){
		if(ar[i]>max){
			max=ar[i];
		}
	}
	return max;
}

int getmin(int ar[],int size){
	int min=INT_MAX;
	for(int i=0;i<size;i++){
		if(min>ar[i]){
			min=ar[i];
		}
	}
	return min;
}

int main(){
	
	int size;
	cin>>size;
	int ar[100];
	for(int i=0;i<size;i++){
		cin>>ar[i];
	}
	
	cout<<"the maximum number in array is "<<getmax(ar,size)<<endl;
	cout<<"the minimum number in array is "<<getmin(ar,size)<<endl;
	
	
	return 0;
}
