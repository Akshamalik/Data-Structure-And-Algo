#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        int maxsum=arr[0];
        int sum=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            sum=arr[i]+arr[i+1];
            maxsum=max(maxsum,sum);
            sum=0;
        }
        
        return maxsum;
    }
};

int main(){
    return 0;
}
