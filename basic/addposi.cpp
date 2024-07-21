#include<iostream>
using namespace std;
int main()
{
    //it will add all positive numbers until negative number encountered and it exits
    cout<<"enter the number";
    int n;
    cin>>n;
    int sum=0;
    while(n>=0)
    {
        sum+=n;
        cout<<"enter the number";
        cin>>n;
    }
    cout<<"the sum is"<<sum<<endl;
    return 0;
}