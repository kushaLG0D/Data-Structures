#include<iostream>
using namespace std;
struct Queue
{
    int size;
    int rear;
    int front;
    int *S;
};
int isFull(Queue *q)
{
    if(q->rear == q->size-1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(Queue *q)
{
    if(q->rear==q->front)
    {
        return 1;
    }
    return 0;
}
void enqueue(Queue *q,int x)
{
    if(isFull(q))
    {
        cout<<"Queue Full"<<endl;
    }
    else
    {
        q->rear++;
        q->S[q->rear]=x;
    }
}
int dequeue(Queue *q)
{
    int x=-1;
    if(isEmpty(q))
    {
        cout<<"Stack Empty";
    }
    else
    {
        q->front++;
        x=q->S[q->front];
    }
}
void display(Queue q)
{
    for(int i=q.front+1;i<=q.rear;i++)
    {
        cout<<q.S[i]<<" ";
    }
}
int first(Queue *q)
{
    int x=-1;
   if(isEmpty(q))
   {
       return x;
   }
   else
   {
        x=q->S[q->front+1];   
   }
    return x;
}

int main(){

    Queue q;
    cout<<"Enter size of the array"<<endl;
    cin>>q.size;
    q.S=new int[q.size];
    q.front=-1;
    q.rear=-1;

    enqueue(&q,5);
    enqueue(&q,10);    
    dequeue(&q);
    cout<<first(&q)<<endl;
    // enqueue(&q,10);
    // enqueue(&q,15);
    // cout<<dequeue(&q)<<endl;
    // cout<<dequeue(&q)<<endl;
   
    display(q);






return 0;
}