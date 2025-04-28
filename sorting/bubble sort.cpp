#include <iostream>
using namespace std;

void bubsort(int ar[],int n){
	for(int i=0;i<n-1;i++){
		bool swapped=false;
		for(int j=0;j<n-i-1;j++){
			if(ar[j]>ar[j+1]){
				swap(ar[j],ar[j+1]);
				swapped=true;
			}
		}
		if(swapped==false){
			break;
		}
	}
}

int main(){
	
	int a[6]={6,7,5,4,2,3};
	
	bubsort(a,6);
	
	for(int i=0;i<6;i++){
		cout<<a[i]<<" ";
	}
	
	
	
	return 0;
}
