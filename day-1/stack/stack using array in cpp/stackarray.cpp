// cpp program to perform push, pop and top operations on a stack
#include<iostream>
#include<stack>

#define size 50 // maximum size using macro

using namespace std;

class Stack
{
private:
    int A[size];
    int top;

public:
    Stack() {A[0] = 0;top = -1;}
    void push(int x);
    int pop();
    int peek();

    bool isEmpty();
    bool isFull();

    void Display();
};

// implementation of the above functions of the class
void Stack :: push(int x)
{
    if(top == -1)
    {
        top = 0;
        A[top] = x;
    }
    else
    {
        top++;
        A[top] = x;
    }
}

int Stack :: pop()
{
    int x;

    if(isEmpty())
        return -1;
    else
    {
        x = A[top--];
    }

    return x;
}

int Stack :: peek()
{
    if(isEmpty())
        return -1;
    else
        return A[top];
}

bool Stack :: isEmpty()
{
    if(top == -1)
        return true;
    return false;
}

bool Stack :: isFull()
{
    if(top >= size)
        return true;
    
    return false;
}

void Stack :: Display()
{
    int i;

    cout<<"\nstack elements : "<<endl;

    if(isEmpty())
    {
        cout<<"stack is empty"<<endl;
        return ;
    }
    else
    {
        for(i=0;i<top+1;i++)
            cout<<A[i]<<" ";
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

    cout<<"\nTop element : "<<s.peek()<<endl;

    s.Display();
}