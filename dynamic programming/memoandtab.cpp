#include<bits/stdc++.h>
using namespace std;

//memoization (top-down)
// int fib[200]={-1};
// int computeFib(int n)
// {
//     if(n==0 || n==1)
//     {
//         return n;
//     }
//     if(fib[n] !=-1)
//     {
//         return fib[n];
//     }
//     int res=fib[n-1]+fib[n-2];
//     fib[n]=res; //memoization
//     return res;
// }

//Tabulation(bottom-up)
// int n;
// cin>>n;
// vi fib[n+1];
// fib[1]=0,fib[2]=1;
// for(int i=2;i<=n;i++)
// {
//     fib[1] = fib[i-1]+fib[i-2];
// }
// cout<<fib[n]<<endl;