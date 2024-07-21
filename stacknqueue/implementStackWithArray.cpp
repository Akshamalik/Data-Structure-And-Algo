#include<iostream>
using namespace std;

class Stack{
    int top;
    int size;
    int * arr;

    public:
    Stack(){
        top=-1;
        size=1000;
        arr=new int[size];
    }

    void push(int x){
        top=top+1;
        arr[top]=x;
    }

    int pop(){
        int x=arr[top];
        top--;
        return x;
    }

    int Top(){
        return arr[top];
    }

    int size(){
        return top+1;
    }
};

int main(){
    Stack s;
    s.push(6);
    s.push(7);
    s.pop();
    cout<<"size of stack"<<s.size()<<endl;
    cout<<"the top element"<<s.Top()<<endl;
    return 0;
}