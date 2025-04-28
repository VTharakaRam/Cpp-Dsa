#include <iostream>
#include <vector>
using namespace std;

//string addstring(string num1,string num2){
//	int num=int(num1)+int(num2);
//	return num;
//}
int largest1(vector<int>nums){
    int n=nums.size();
    int sum=0;
    for(int i=0;i<n-2;i++){
        int a=nums[i];
        int p=0;
        for(int j=i+1;j<n-1;j++){
            int b=nums[j];
            for(int k=j+1;k<n;k++){
            	int c=nums[k];
            	if(a+b>c && b+c>a && c+a>b){
                    p=a+b+c;
                    if(sum<p){
                        sum=p;
        			}
                }
			}
        }
    }
    return sum;
}

int largest2(vector<int>nums){
    int n=nums.size();
    int sum=0;
    int k=0;
    for(int i=1;i<n-1;i++){
        int a=nums[i-1];
        int b=nums[i];
		int c,p=0;
        for(int j=i+1;j<n;j++){
            c=nums[j];
            if(a+b>c && b+c>a && c+a>b){
                p=a+b+c;
                if(sum<p){
                    sum=p;
                    k=j+i;
                    
                }
			}
        }
    }
    return sum+k;
}

int main(){
	
//	cout<<addstring(11,123);
	
//	float a=2.3;
//	cout<<int(a)<<endl;
//	
//	string s1="123";
//	string s2="11";
//	cout<<"s1+s2"<<s1+s2<<endl;
	
	vector<int> v;
	v={3,2,3,4};
	cout<<largest1(v);
	
	
}
