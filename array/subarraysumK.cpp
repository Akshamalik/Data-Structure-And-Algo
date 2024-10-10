//Given an array of integers and an integer k, return the total number of subarrays whose sum equals k.A subarray is a contiguous non-empty sequence of elements within an array.
#include <bits/stdc++.h>
using namespace std;

//brute o(n^3)
int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    int cnt=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum==k) cnt++;
        }
    }
    return cnt;
}

//better o(n^2)
int findAllSubarraysWithGivenSum2(vector < int > & arr, int k) {
    int cnt=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k) cnt++;
        }
    }
    return cnt;
}
//optimal o(n + logn) for map and o(n+n) for unordered map
int findAllSubarraysWithGivenSum3(vector < int > & arr, int k) {
    int cnt=0;
    map<int,int> mpp;
    mpp[0]=1;
    int n=arr.size();
    int preSum=0;
    for(int i=0;i<n;i++){
        preSum+=arr[i];
        int remove=preSum-k;
        cnt+=mpp[remove];
        mpp[preSum]+=1;
    }
    return cnt;
}

int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    int k;
    cout<<"enter the value of k";
    cin>>k;
    int res=findAllSubarraysWithGivenSum(arr,k);
    cout<<"the result is "<<res<<endl;
    return 0;
}


