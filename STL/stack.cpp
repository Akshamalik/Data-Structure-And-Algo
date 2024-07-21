#include<iostream>
#include<stack>
using namespace std;
//Lifo

int main()
{
    stack<string> s;

    s.push("love");
    s.push("yourself");

    cout<<"top element"<<s.top()<<endl;
    s.pop();
    cout<<"size of stack"<<s.size()<<endl;
    cout<<"is empty"<<s.empty()<<endl;
    return 0;
}