#include <iostream>
using namespace std;

void print(int *ar,int n){
	cout<<"size->"<<sizeof(ar)<<endl;
	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}
}

int getsum(int *a,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	return sum;	
}



int main(){
	
	int n;
	cout<<"size of n is:";
	cin>>n;
	int a[n]={1,4,3,8,6,7};
	
	print(a,n);
	
	cout<<"sum of 6 elements:"<<getsum(a,n)<<endl;
	cout<<"sum of last 3 elements:"<<getsum(a+n-3,3)<<endl;
	
	
}
