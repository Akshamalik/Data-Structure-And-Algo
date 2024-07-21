//vector is dynamic array it creates new vector and dumps the old one
#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> v;
    vector<int> a(5,1); //assign size as 5 and assign all them to 1
    vector<int> last(a);
    cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"size"<<v.size()<<endl;
    cout<<"element at 2nd index"<<v.at(2);
    cout<<"front"<<v.front()<<endl;
    cout<<"back"<<v.back()<<endl;
    cout<<"before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<"";
    }cout<<endl;

    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v)
    {
        cout<<i<<endl;
    }
    //when we clear a vector its size becomes 0 but not any change capacity
    v.clear();

    return 0;
}