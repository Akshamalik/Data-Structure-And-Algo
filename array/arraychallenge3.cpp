//Maximum sum circular subarray
#include<iostream.h>
#include<climit>

using namespace std;
void kadane(int arr[n],int n)
{
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

 return maxSum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(arr,n);
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=totalsum+kadane(arr,n);
}