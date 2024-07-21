#include<iostream>
using namespace std;

//Prime number
int main()
{
    int n;
    cin>>n;
    int div;
    div=2;
    while(div<n)
    {
        if(n%div==0)
        {
            cout<<"not prime"
        }
        else{
            div=div+1;
        }
    }
    cout<<"prime";
}