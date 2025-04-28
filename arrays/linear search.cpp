#include <iostream>
using namespace std;

bool search(int ar[],int size,int key){
	for(int i=0;i<size;i++){
		if(key==ar[i]){
			return 1;
		}
		
	}
	return 0;
}

int main(){
	
	int ar[10]={2,5,8,51,13,21,10,1,-1,0};
	int key;
	cout<<"enter the key->";
	cin>>key;
	
	bool found=search(ar,10,key);
	
	if(found){
		cout<<"key is present "<<endl;
	}
	else{
		cout<<"key is not present"<<endl;
	}
	
	
	return 0;
}
