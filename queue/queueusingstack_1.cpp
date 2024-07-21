//queue using one stack 
#include<bits/stdc++.h>
using namespace std;
class que{
    stack<int> s1;
    public:
    //O(1)
    void push(int x){
    s1.push(x);
    }
    //O(n)
    int pop(){
        if(s1.empty()){
            cout<<"queue is empty\n";
            return -1;
        }
        int x=s1.top();
        s1.pop();
        if(s1.empty())
        {
            return x;
        }
        int item=pop();
        s1.push(x);
        return item;
   }
   bool empty(){
    if(s1.empty()){
        return true;
    }
    return false;
   }
};


int main(){
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.pop();
    return 0;
}