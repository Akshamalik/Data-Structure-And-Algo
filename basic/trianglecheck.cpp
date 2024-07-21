#include<iostream>
using namespace std;

int main()
{
    int sidea,sideb,sidec;
    cout<<"Enter sides";
    cin>>sidea>>sideb>>sidec;
    if(sidea==sideb && sideb==sidec)
    {
        cout<<"equilateral triangle";
    }
    else if(sidea==sideb|| sideb==sidec|| sidea==sidec)
    {
        cout<<"iosceles triangle";
    }
    else{
        cout<<"scalene triangle";
    }
    return 0;
}