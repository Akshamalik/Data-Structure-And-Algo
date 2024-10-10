//Given an array that contains both negative and positive integers, find the maximum product subarray.
#include<bits/stdc++.h>
using namespace std;

//brute force
int maxProductSubArray(vector<int>& nums) {
    int res=INT_MIN;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int prod=1;
            for(int k=i;k<j;k++){
                prod*=nums[k];
            }
            res=max(res,prod);
        }
    }
    return res;
}

//better
int maxProductSubArray2(vector<int> &nums){
    int res=nums[0];
    int n=nums.size();
    for(int i=0;i<n;i++){
        int prod=nums[i];
        for(int j=i+1;j<n;j++){
            res=max(res,prod);
            prod*=nums[j];
        }
        res=max(res,prod);
    }
    return res;
}

//optimal
int maxProductSubArray3(vector<int> &nums){
    int pre=1;
    int suff=1;
    int ans=INT_MIN;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(pre==0) pre=1;
        if(suff==0) suff=1;
        pre*=nums[i];
        suff*=nums[n-i-1];
        ans=max(ans,max(suff,pre));
    }
    return ans;
}

//optimal kadane
int maxProductSubArray(vector<int>& nums) {
    int prod1 = nums[0],prod2 = nums[0],result = nums[0];
    
    for(int i=1;i<nums.size();i++) {
        int temp = max({nums[i],prod1*nums[i],prod2*nums[i]});
        prod2 = min({nums[i],prod1*nums[i],prod2*nums[i]});
        prod1 = temp;
        
        result = max(result,prod1);
    }
    
    return result;
}

int main() {
    vector<int> nums = {1,2,-3,0,-4,-5};
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    return 0;
}


