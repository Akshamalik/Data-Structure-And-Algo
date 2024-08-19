#include<bits/stdc++.h>

using namespace std;

bool check(vector<int>& nums) {
       int n=nums.size();
       int count=0;
       for(int i=0;i<n-1;i++){
        if(nums[i]>nums[i+1]){
           count++;
        }
       }
       if(nums[n-1]>nums[0]){
        count++;
       }

       if(count<=1) return true;

       else return false;
    }

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<"The maximum subarray sum is(with brute force)"<<check(arr);
    return 0;
}