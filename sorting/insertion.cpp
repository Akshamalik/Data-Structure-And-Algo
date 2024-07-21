#include<iostream.h>
using namespace std;

class stack{
    int* arr;
    int top;
    public:
    stack()
    {
        arr=new int(n);
        top=-1;

    }
    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"stack overflow";
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack underflow";
            return;
        }
        top--;
    }
    int top()
    {
        if(top==-1)
        {
            cout<<"no element in the stack";
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top==-1;
    }
};

int main()
{
    stack st;
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(90);
    st.pop();
    cout<<"top element is"<<st.top();
    cout<<"check if stack is empty";
    cout<<st.empty();

    return 0;
}