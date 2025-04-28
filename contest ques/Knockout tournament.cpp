#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
	
	
	int t;
	cin>>t;
	
	while(t--){
	    vector<int> v={22,16,36,18,4,21,28,2,7,35,9,15,5,23,10,20};
	    vector<int> b(16);
	    for(int i=0;i<16;i++){
	        b.push_back(v[i]);
	    }
	    sort(b.begin(),b.end());
	    int ans[16];
	    for(int i=0;i<16;i++){
	        for(int j=0;j<16;j++){
	            if(v[i]==b[j]){
	                if(j==0){
	                    ans[i]=0;
	                    //break;
	                }
	                else if(j>0&&j<3){
	                	ans[i]=1;
	                //	break;
					}
					else if(j>2&&j<7){
						ans[i]=2;
					//	break;
					}
					else if(j>6&& j<14){
						ans[i]=3;
					//	break;
					}
					else if(j==15){
						ans[i]=4;
					//	break;
					}
	            }
	        }
	    }
	    
	    for(int i=0;i<16;i++){
	    	cout<<ans[i]<<endl;
		}
	    
	}
	
	
	
}
