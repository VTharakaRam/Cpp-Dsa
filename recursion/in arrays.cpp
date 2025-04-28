#include <iostream>
using namespace std;

void arrai(int* a,int n){
	if(n==0){
		return;
	}
	cout<<a[0]<<" ";
	arrai(a+1,n-1);
	//return;
}

int sum(int *ar,int n){
	if(n==0){
		return 0;
	}
	int ans=ar[0];
	return ans+sum(ar+1,n-1);
	//return ans;
}

void table(int n){
	if(n==0){
		return;
	}
	table(n-1);
	cout<<"2*"<<n<<"="<<2*n<<endl;
}

int main(){
	
	int n;
	cin>>n;
	int* a=new int[n];
	
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	arrai(a,n);
	cout<<endl;
	
	cout<<"2 table using recursion->"<<endl;
	table(10);
	cout<<endl;
	
	cout<<"sum of elements in array is->"<<sum(a,n)<<endl;
	
	
}
