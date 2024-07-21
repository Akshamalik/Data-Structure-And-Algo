//FIFO
//there are two types of enqueue costly and dequeue costly
//we keep 2 stacks we enqueue in 1 stack for dequeue we do shift elements into another stack
#include<bits/stdc++.h>
using namespace std;
class que{
    stack<int> s1;
    stack<int> s2;

    public:
    //O(1)
    void push(int x){
    s1.push(x);
    }
    //O(n)
    int pop(){
        if(s1.empty() and s2.empty()){
            cout<<"queue is empty\n";
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval=s2.top();
        s2.pop();
        return topval;

   }
   bool empty(){
    if(s1.empty() and s2.empty()){
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