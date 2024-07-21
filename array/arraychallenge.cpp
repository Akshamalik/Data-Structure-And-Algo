//an arithmetic array is an array that containes at least two integers and the difference between consecutive integers are equal.
//Saraswati has an array of N non-negative integers. The ith integer of the array is Ai.SHe wants to choose a contiguos arithmetic subarray
//for her array that has the maximum length. 

#include<iostream.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=2;
    int d=a[1]-a[0];
    int j=2;
    int curr=2;
    while(j<n)
    {
        if(a[j]-a[i]==d)
        {
            curr++;
        }
        else{
            d=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;

    }
    cout<<ans<<endl;
    return 0;
}