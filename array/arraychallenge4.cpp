
//Pair Target Sum problem
#include<iostrem>
#include<climit>
using namespace std;
bool pairsum(int arr[n],int n,int k)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        if(arr[low]+arr[high]==k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low] + arr[high]>k)
        {
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}
int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    bool(arr,n,k);
}
