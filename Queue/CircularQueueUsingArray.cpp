#include<iostream>
using namespace std;
struct CircularQueue
{
    int size;
    int front;
    int rear;
    int *S;
};
int isEmpty(struct CircularQueue *q)
{
    if(q->front==q->rear)
    {
        return 1;
    }
    return 0;
}
int isFull(struct CircularQueue *q)
{
    if((q->rear+1)%q->size==q->front)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct CircularQueue *q,int x)
{
    if(isFull(q))
    {
        cout<<"qFull"<<endl;
    }
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->S[q->rear]=x;
    }
    cout<<"enqueue elemenet:"<<x<<":"<<q->rear<<endl;
}
int dequeue(struct CircularQueue *q)
{
    int x=-1;
    if(isEmpty(q))
    {
        cout<<"qEmpty"<<endl;
    }
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->S[q->front];
     }
    return x;
}


int main(){

    struct CircularQueue q;
    cout<<"Enter size of array"<<endl;
    cin>>q.size;
    q.S=new int[q.size];
    q.front=0;
    q.rear=0;
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    //enqueue(&q,50);

    // dequeue(&q);
    // dequeue(&q);
    // dequeue(&q);
    // dequeue(&q);

    enqueue(&q,5);

    if(isEmpty(&q))
    {
        cout<<"qEmpty"<<endl;
    }
    if(isFull(&q))
    {
        cout<<"qFull"<<endl;
    }
  



return 0;
}