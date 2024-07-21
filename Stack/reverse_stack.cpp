//insert at bottom recursive call
#include<iostream.h>
#include<stack>
using namespace std;

void reverse(stack<int> &st)
{
    if(st.empty()){
        return;
    }
    int ele=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,ele);
}

void insertAtBottom(stack <int> &st,int ele)
{
    if(st.empty())
    {
        st.push(ele);
        return;
    }
    int topele=st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(topele);
}

int main()
{
    stack<int> st;
    st.push(2);
    st.push(5);
    st.push(8);
    reverse(st);
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }cout<<endl;
}