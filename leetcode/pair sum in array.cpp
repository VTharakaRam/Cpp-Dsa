#include <iostream>
using namespace std;

void array(int ar[],int size,int num){
	for(int i=0;i<size;i++){
		int no=ar[i];
		for(int j=i+1;j<size;j++){
			if(no+ar[j]==num){
				cout<<no<<" "<<ar[j]<<endl;
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
