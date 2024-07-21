#include<iostream>
using namespace std;
//nCr=n!/(n-r)!*r!
int fact(int n){
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int n,r;
    cin>>n>>r;

    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans;

    return 0;
}