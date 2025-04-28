#include <iostream>
#include <vector>
using namespace std;

int getsum(int *arr,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum;
}

int main(){
	
	//static memory allocation
	int n=5;
	cout<<n<<endl;
	
	//reference variable
	int &y=n;
	cout<<"size is->"<<sizeof(y)<<endl;
	cout<<y<<endl;
	
	
	//dynamic memory allocation  
	int *a=new int;
	cout<<"size is->"<<sizeof(a)<<endl;
	cout<<*a<<endl;//printing a garbage value
	
	//creating an array in dma
	int z;
	cin>>z;
	int *arr=new int[z];
	
	for(int i=0;i<z;i++){
		cin>>arr[i];
	}
	
	cout<<getsum(arr,z)<<endl;
	
	//creating a 2D array
//	int r,c;
//	cin>>r>>c;
//	int **num=new int*[r];
//	
	vector<int> v;
	int p=4;
	for(auto i:v){
		cout<<i<<endl;
		cout<<"hi"<<endl;
	}
	
}
