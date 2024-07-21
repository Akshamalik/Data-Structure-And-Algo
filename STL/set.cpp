#include<iostream>
#include<set>
using namespace std;

int main()
{
    //only one item of same value
    set<int> s;
    s.insert(5);
    s.insert(7);
    s.insert(5);
    set<int>::iterator it=s.begin;
    it++;
    s.erase(it);
    cout<<s.count(5)<<endl;
    set<int>::iterator itr=s.find(5);
    for(auto it=itr;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;
    for(auto i:s)
    {
        cout<<i<<endl;
    }
}

