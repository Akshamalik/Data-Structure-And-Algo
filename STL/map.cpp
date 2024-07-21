#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;
    m[1]="aksha";
    m[2]="malik";
    for(auto i:m)
    {
        cout<<i.first<<endl;
    }
    return 0;
}