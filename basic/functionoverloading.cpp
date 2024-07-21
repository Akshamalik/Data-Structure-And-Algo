#include<iostream>
using namespace std;
//corrected
int sum(int a,int b)
{
    cout<<"using 2 arguments"<<endl;
    return (a+b);
}

int sum(int a,int b,int c)
{
    cout<<"using 3 arguments"<<endl;
    return (a+b+c);
}

int main()
{
    cout<<"enter the three numbers";
    int a,b,c;
    cin>>a>>b>>c;
    cout<<sum(a,b)<<endl;
    cout<<sum(a,b,c)<<endl;
    return 0;
}