// cpp program for stack using linked list
#include<iostream>

using namespace std;

// class for node in linked list
class Node
{
public:
    int data;
    Node *next;
};

// class for stack using linked list
class Stack
{
private:
    Node* top;

public:
    Stack() {top = nullptr;}
    void push(int x);
    int pop();
    int peek();

    bool isEmpty();

    void Display();
};


// implementation of the above functions of the class
void Stack :: push(int x)
{
    Node *t;

    t = new Node;
    t->data = x;
    t->next = nullptr;

    if(isEmpty())
        top = t;
    else
    {
        t->next = top;
        top = t;
    }
}

int Stack :: pop()
{
    int x;

    Node *p = top;

    if(isEmpty())
        return -1;
    else
    {
        p = p->next;

        x = top->data;

        delete top;

        top = p;
    }

    return x;
}

int Stack :: peek()
{
    if(isEmpty())
        return -1;
    else
        return top->data;
}

bool Stack :: isEmpty()
{
    if(top == nullptr)
        return true;
    return false;
}

void Stack :: Display()
{
    int i;

    Node *p = top;

    cout<<"\nstack elements : "<<endl;

    if(isEmpty())
    {
        cout<<"\nstack is empty"<<endl;
        return ;
    }
    else
    {
        while(p != nullptr)
        {
            cout<<p->data<<"->";

            p = p->next;
        }

        cout<<"NULL";
    }
}

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.Display();

    cout<<"\nPopped element : "<<s.pop()<<endl;

    s.Display();
}