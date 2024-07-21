// Queue is a data structure that stores data in FIFO fashion eg-ticket counter
// Make an array.Add from one end of array and delete from one end.
// Restricted with size of array.
#include <iostream>
using namespace std;

#define n 20
class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;  //at the start front and back initialize
        back = -1;
    }
    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;
        if (front == -1)
        {
            front++;
        }
    }
    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "Underflow" << endl;
            return;
        }

        front++;
    }
    bool empty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        return false;
    }
    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements" << endl;
            return -1;
        }
        return arr[front];
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    cout << q.peek();
    return 0;
}