#include<iostream>
using namespace std;

int main()
{
    int a,b;
    for(int i=a;i<=b;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            cout<<i<<endl;
        }
    }
    return 0;

}