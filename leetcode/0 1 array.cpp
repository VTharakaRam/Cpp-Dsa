#include <iostream>
using namespace std;

void array(int ar[],int i,int j){
	while(i<=j){
		if(ar[i]=1 & ar[j]==0){
			swap(ar[i],ar[j]);
			i++;j++;
		}
		else if(ar[i]==0){
			i++;
		}
		else{
			j++;
		}
	}
}

int main(){
	
	int i;
	cout<<"enter the value of i:";
	cin>>i;
	int j;
	cout<<"enter the value of j:";
	cin>>j;
	int ar[100]={1,0,1,0,0,1};
	array(ar,i,j);
	for(int k=0;k<j;k++){
		cout<<ar[k];
	}
	
	return 0;
}
