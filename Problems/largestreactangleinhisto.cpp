#include <bits/stdc++.h>

using namespace std;

// given an array each element represents the height to the histogram's bar and the width of each bar is 1 find the area of largest rectangle int the histogram
//Brute force
// int ans=0,n=a.size();
// for(int i=0;i<n;i++)
// {
//     int minh=inf;
//     for(int j=i;j<n;j++)
//     {
//         minh=min(a[j],minh);
//         int len=j-i+1;
//         ans=max(ans,len*minh);
//     }
// }
// cout<<ans;

//optimized approach
//potential area and pop till stack elements is greater

int get_max_area(vector<int> a)
{

   int n=a.size();
   stack<int> st;
   int ans=0,i=0;
   a.push_back(0);
   while(i<n)
   {
    while(!st.empty() and a[st.top()] >a[i])
    {
        int t=st.top();
        int h=a[t];
        st.pop();
        if(st.empty())
        {
            ans=max(ans,h*i);
        }
        else{
            int len=i-st.top()-1;
            ans=max(ans,h*len);
        }
    }
    st.push(i);
    i++;
   }
   return ans;
}
    
   
int32_t main()
{
    vector<int> a={2,1,5,6,2,3};
    cout<<get_max_area(a);
}

