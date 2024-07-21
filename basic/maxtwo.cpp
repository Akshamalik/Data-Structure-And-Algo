#include<iostream>
using namespace std;
//correct
int main()
{
    int a,b,big;
    cout<<"enter two numbers";
    cin>>a>>b;
    big=(a>b)?a:b;
    cout<<"big number"<<big;
    return 0;
}