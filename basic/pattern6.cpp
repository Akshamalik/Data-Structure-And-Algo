#include<iostream>
using namespace std;

// 54321
// 5432
// 543
// 54
// 5
int main()
{
    int i,j;
    int n;
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=1;j--)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}