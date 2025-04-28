#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	cout<<endl;
	int x,y,z;
	int ans;
	
	while(t!=0){
	    
	    cin>>x>>y>>z;
	    int n;
	    n=x*y;
	
  	    if(z>=n){
	        cout<<0<<endl;
	    }
	    else{
	        for(int i=0;i<x;i++){
	            if(z<n){
	                ans=ans+1;
	                n=n-y;
	            }
	        }
	        cout<<ans<<endl;
	    }
	    
	    t--;
	}


    return 0;
}
