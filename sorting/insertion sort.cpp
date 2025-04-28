#include <iostream>
using namespace std;

void insertsort(int ar[],int n){
	for(int i=1;i<n;i++){
		int temp=ar[i];
		int j=i-1;
		for(;j>=0;j--){
			cout<<"j->"<<j<<"->"<<ar[j]<<endl;
			if(ar[j]>temp){
				ar[j+1]=ar[j];
			}
			else{
				break;
			}
		}
		ar[j+1]=temp;
	}
}

int main(){
	
	int a[6]={6,1,9,4,2,3};
	
	for(int i=0;i<6;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	insertsort(a,6);
	
	for(int i=0;i<6;i++){
		cout<<a[i]<<" ";
	}
	
	
	
	return 0;
}
