// cpp program to insert, delete elements in queue using Linked List
#include<iostream>

using namespace std;

// class for node of a linked list
class Node
{
public:
    int data;
    Node *next;
};

// class for queue using Linked List
class Queue
{
private:
    Node *front;    // first node's pointer in queue
    Node *rear;     // last node's pointer in queue

public:
    Queue() {front = rear = nullptr;}

    void enqueue(int x);
    int dequeue();

    void Display();

    bool isEmpty();
};

// implementation of the above functions of the above class

void Queue :: enqueue(int x)
{
    Node *temp;

    if(isEmpty())
    {
        front = new Node;

        front->data = x;
        front->next = nullptr;

        rear = front;
    }
    else
    {
        temp = new Node;

        temp->data = x;
        temp->next = nullptr;

        rear->next = temp;
        rear = temp;
    }
}

int Queue :: dequeue()
{
    int x = -1;

    Node *temp;

    if(isEmpty())
        return -1;
    else
    {
        x = front->data;

        temp = front;

        temp = temp->next;

        delete front;

        front = temp;
    }

    return x;
}

void Queue :: Display()
{
    Node *p = front;

    cout<<"\nElements of Queue : ";

    while(p != nullptr)
    {
        cout<<p->data<<"->";

        p = p->next;
    }

    cout<<"NULL"<<endl;
}

bool Queue :: isEmpty()
{
    if(front == nullptr && rear == nullptr)
        return true;

    return false;
}

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.Display();

    cout<<"Deleted Element : "<<q.dequeue()<<endl;

    q.Display();
}