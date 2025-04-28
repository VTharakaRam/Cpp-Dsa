#include <iostream>
using namespace std;

void update(int ar[],int size){
	cout<<endl<<"inside the function"<<endl;
	//updating an array
	ar[0]=12;
	//printing array
	for(int i=0;i<size;i++){
		cout<<ar[i]<<" ";
	}
}

int main(){
	
	int ar[3]={1,2,3};
	update(ar,3);
	
	//printing array
	cout<<endl;
	for(int i=0;i<3;i++){
		cout<<ar[i]<<" ";
	}
	
	
	return 0;
}
