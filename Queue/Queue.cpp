// First in First Out (FIFO) Queue Implementation in C++
// deque = double ended queue
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Queue
{
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = NULL;
        tail = NULL;
    }
    void push(int val)
    {
        Node *newNode = new Node(val);
        if (empty())
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop()
    {
        // we can only pop from the front
        if (empty())
        {
            cout << "Popped element is 0: " << endl;
            return;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    int front()
    {
        if (empty())
        {
            cout << "Popped element is 0: " << endl;
            return -1;
        }
        else
        {
            return head->data;
        }
    }
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    q.pop();

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}