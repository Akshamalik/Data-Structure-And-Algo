#include <bits/stdc++.h> 
using namespace std;
int largestElement(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    return arr[n-1];
}

int largestElement2(vector<int> &arr, int n) {
    int largest=arr[0];
    for(int i=0;i<n;i++){
       if(arr[i]>largest){
           largest=arr[i];
       }
    }
    return largest;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the largest element is"<<endl;

    int large1=largestElement(arr,n);
    int large2=largestElement2(arr,n);
    cout<<large1<<large2<<endl;
    return 0;
}
