#include <iostream>
using namespace std;

void array(int ar[],int size,int num){
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			for(int k=i+2;k<size;k++){
				if(ar[i]+ar[j]+ar[k]==num){
				    cout<<ar[i]<<" "<<ar[j]<<" "<<ar[k]<<endl;
			    }
			}
	    }
	}
}


int main(){
	
	int n;
	cout<<"enter the size:";
	cin>>n;
	int num;
	cout<<"enter the size:";
	cin>>num;
	int ar[100]={1,2,3,4,5}; 
	
	array(ar,n,num);
	
	return 0;
}
