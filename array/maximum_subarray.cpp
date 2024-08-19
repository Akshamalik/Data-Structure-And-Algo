#include<bits/stdc++.h>
using namespace std;

//Optimal
//O(n) O(1)
int subarrsum_optimal(int arr[],int n){
int start=0;
int ansS=-1;
int ansE=-1;
long long sum=0;
long long maxi=LONG_MIN;
for(int i=0;i<n;i++){
    if(sum==0) start=i;
    sum+=arr[i];
    if(sum>maxi){
        maxi=sum;
        ansS=start;
        ansE=i;
    }
    if(sum<0){
        sum=0;
    }
    // this is for empty subarray
    // if(maxi<0){
    //     maxi=0;
    // }
}
 cout << "The subarray is: [";
    for (int i = ansS; i <= ansE; i++) {
        cout << arr[i] << " ";
    }
    cout << "]n";
return maxi;

}

//Better 
//O(n2) SC-O(1)
int subarrsum_better(int arr[],int n){
    int maxSum=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
             sum+=arr[j];
             maxSum=max(maxSum,sum);
        }
    }
    return maxSum;
}

//Brute Force
//TC-near about not exactly O(n3) SC-O(1)
int subarrsum_brute(int arr[],int n){
int maxSum=INT_MIN;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int sum=0;
        for(int k=i;k<j;k++){
            sum+=arr[k];
            maxSum=max(sum,maxSum);
        }
    }
}
return maxSum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<"The maximum subarray sum is(with brute force)"<<subarrsum_brute(arr,n);
    cout<<"The maximum subarray sum is(with better approach)"<<subarrsum_better(arr,n);
    cout<<"The maximum subarray sum is(with optimal approach)"<<subarrsum_optimal(arr,n);
    return 0;
}