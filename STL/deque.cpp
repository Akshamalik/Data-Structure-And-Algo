#include<iostream>
#include<deque>
using namespace std;


int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d)
    {
        cout<<i<<endl;
    }
    d.pop_back();  //or pop_front
    
    cout<<"print first"<<d.at(1)<<endl;
    cout<<"front"<<d.front()<<endl;
    cout<<"back"<<d.back()<<endl;
    cout<<"check empty"<<d.empty()<<endl;
    cout<<""
    d.erase(d.begin(),d.begin()+1);
    return 0;
}