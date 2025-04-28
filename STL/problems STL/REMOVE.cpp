#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    vector<int> v={3,2,2,3};
    int n=v.size();
    int ans=0;
    int val;
    cout<<"value is"<<endl;
    cin>>val;
    for(int i=0;i<n;i++){
        if(v[i]==val){
            ans++;
            v.erase(v.begin()+i+1);
        }
    }
    for(int h: v){
        cout<<h<<" ";
    }
    cout<<endl;
    
    cout<<n-ans<<endl;

    return 0;
}
