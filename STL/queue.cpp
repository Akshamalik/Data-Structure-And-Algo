#include <iostream>
#include <queue>
using namespace std;
//fifo
int main()
{
    queue<string> q;
    q.push(2);
    q.push(4);
    q.push(5);
    q.pop();
    cout << "element" << q.size() << endl;
    cout << "front element"<<q.front()<<endl; 
    return 0;
}