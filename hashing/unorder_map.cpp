
#include <bits/stdc++.h>
using namespace std;
int main() {
   cout<<"enter the size"<<endl;
   int n;
   cin>>n;
   int arr[n];
   cout<<"enter the desired array"<<endl;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   unordered_map<int,int> mp;
   for(int i=0;i<n;i++){
       mp[arr[i]]++;
   }
   for(auto it:mp){
       cout<<it.first<<"->"<<it.second;
   }
   cout<<"please enter the number of queries"<<endl;
   int q;
   cin>>q;
   while(q--){
       cout<<"enter the number"<<endl;
       int num;
       cin>>num;
       cout<<mp[num];
   }
    return 0;
}