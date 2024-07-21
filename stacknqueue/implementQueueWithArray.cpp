#include <iostream>
using namespace std;

class Queue()
{
    int start, end, maxSize, currSize;
    int *arr;

public:
    Queue()
    {
        start = 1;
        end = -1;
        arr = new int[16];
        currSize = 0;
    }

    Queue(int maxSize)
    {
        (*this).maxSize = maxSize;
        arr = new int[maxSize];
        start = -1;
        end = -1
    }

    void push(int element)
    {
        if (currSize == maxSize)
        {
            cout << "queue is full" << endl;
            exit(1);
        }

        if (end == -1)
        {
            start = 0;
            end = 0;
        }
        else
            end = (end + 1) % maxSize;

        arr[end] = element;
        cout << "new element added" << element << endl;

        currSize++;
    }

    int pop()
    {
        if (start == -1)
        {
            cout << "queue is empty" << endl;
            exit(1);
        }
        int popped = arr[start];
        if (start = 0)
        {
            start = -1;
            end = -1;
        }
        else
            start = (start + 1) % maxSize;
        cout << "popped element" << popped << endl;
        currSize--;
    }

    int top()
    {
        if (start == -1)
        {
            cout << "queue is empty" << endl;
            exit(1);
        }
        return arr[start];
    }

    int size()
    {
        return currSize;
    }
};

int main()
{
    Queue q(6);
    q.push(4);
    q.push(14);
    q.push(24);
    q.push(34);
    cout << "The peek of the queue before deleting any element " << q.top() << endl;
    cout << "The size of the queue before deletion " << q.size() << endl;
    cout << "The first element to be deleted " << q.pop() << endl;
    cout << "The peek of the queue after deleting an element " << q.top() << endl;
    cout << "The size of the queue after deleting an element " << q.size() << endl;

    return 0;
}