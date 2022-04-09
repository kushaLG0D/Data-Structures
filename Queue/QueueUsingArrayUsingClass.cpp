#include<iostream>
#ifndef QueueCpp_h
#define QueueCpp_h
using namespace std;

class Queue
{
    int size;
    int front;
    int rear;
    char *S;
    public:
    Queue(int size);
    void enqueue(char x);
    char dequeue();
    int isFull();
    int isEmpty();
    char first();
    void display();
};
Queue :: Queue(int n)
{
    this->size=n;
    this->front=-1;
    this->rear=-1;
    this->S=new char[n];
}
int Queue::isEmpty()
{
    if(front==rear)
    {
        return 1;
    }
    return 0;
}
int Queue::isFull()
{
    if(rear==size-1)
    {
        return 1;
    }
    return 0;
}
void Queue::enqueue(char x)
{
    if(isFull())
    {
        cout<<"Queue FUll"<<endl;        
    }
    else
    {
        rear++;
        S[rear]=x;
    }
}
char Queue::dequeue()
{
    char x=-1;
    if(isEmpty())
    {
        cout<<"Queue Empty"<<endl;
    }
    else
    {
        front++;
        x=S[front];
    }

    return x;
}
void Queue::display()
{
    for (int i = front+1; i <=rear; i++)
    {
        cout<<S[i]<<endl;
    }
}
char Queue::first()
{
    char x=-1;
    if(isEmpty())
    {
        return x;
    }
    else
    {
        x=S[front+1];
    }
    return x;
}
#endif \* QueueCpp_h \*

int main(){
    Queue q(4);
    q.enqueue('a');
    q.enqueue('b');
    q.enqueue('c');
    q.enqueue('d');
    
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    
   
    q.display();



return 0;
}
