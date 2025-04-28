#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


double minimumAverage(vector<int> &nums) {
        int n=nums.size();
        vector<float> s;
        float avg=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            avg=(nums[i]+nums[n-i-1])/2.0;
            s.push_back(avg);
        }
        sort(s.begin(),s.end());
        return s[0];
}

double minAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = nums.size()-1;
        double arg = INT_MAX;
        while(i<j){
            double ans = (nums[i] + nums[j])/2.0;
            arg = min(ans,arg);
            i++;
            j--;
        }
        return arg;
    }


int main(){
	
	
    vector<int> nums= {7,8,3,4,15,13,4,1};
    cout<<minimumAverage(nums)<<endl;
	cout<<minAverage(nums)<<endl;
	
}
