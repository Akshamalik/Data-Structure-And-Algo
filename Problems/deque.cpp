#include <iostream>
#include <deque>
using namespace std;

// stack and queue mix push and pop from end
// insert and delete from start
//  deque<int> dq;
//  dq.push_front(1);
//  dq.push_back(2);
int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);

    dq.push_back(3);
    dq.push_back(4);

    dq.pop_back();
    dq.pop_front();
    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}