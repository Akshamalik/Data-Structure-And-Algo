//Maximum sum subarray array
#include<iostream.h>
#include<climit>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
    //this is brute force approach Time complexity-0(n^3) and space complexity-0(1)
    // int maxSum=INT_MIN;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i;j<n;j++)
    //     {
    //         int sum=0;
    //         for(int k=i;k<=j;k++)
    //         {
    //             sum+=arr[k];
    //         }
    //         maxSum=max(maxSum,sum);
    //     }
    // }
//Prefix sum approach-Time complexity-0(n^2)and space complexity-0(n)

// int cumSum[n+1];
// cumSum[0]=0;
// for(int i=1;i<=n;i++)
// {
//     cumSum[i]=cumSum[i-1]+arr[i-1];
// }
// int maxSum=INT_MIN;
// for(int i=1;i<=n;i++)
// {
//     int sum=0;
//     maxSum=max(maxSum,cumSum[i]);
//     for(int j=1;j<=i;j++)
//     {
//         sum=cumSum[i]-cumSum[j-1];
//         maxSum=max(maxSum,sum);
//     }
// }
//Kedane's Algoritm -Time complexity0(N)and space complexity-0(1)
int currentSum=0;
int maxSum=INT_MIN;
for(int i=0;i<n;i++)
{
    currentSUm+=arr[i];
    if(currentSum<0){
    currentSUm=0;
    }
    maxSum=max(maxSum,currentSum);
    }

cout<<maxSum<<endl;
return 0;
}