#include <iostream>
using namespace std;




int main(){
	
	
	int n;
	cout<<"enter the number:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==2&j==2){
			//	break;
				continue;
			}
			cout<<i<<j<<endl;
		}
		cout<<endl;
	}
	
	return 0;
}
