#include <iostream>
using namespace std;

void selsort(int ar[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(ar[min]>ar[j]){
				min=j;
			}
		}
		swap(ar[min],ar[i]);
	}
}

int main(){
	
	int a[6]={5,7,2,1,8,3};
	
	selsort(a,6);
	
	for(int i=0;i<6;i++){
		cout<<a[i]<<" ";
	}
	
	
	
	return 0;
}
