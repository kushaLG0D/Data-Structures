#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
}*front,*rear=NULL;

int isEmpty()
{
    if(front==NULL)
    {
        return 1;
    }
    return 0;
}
int isFull()
{
    Node *t=new Node;
    if(t==NULL)
    {
        return 1;
    }
    return 0;
}
void enqueue(int x)
{
    Node *t=new Node;
    
    if(t==NULL)
    {
        cout<<"qFull"<<endl;
    }
    t->data=x;
    t->next=NULL;
    if(front==NULL)
    {
        front=t;
        rear=t;
    }
    else{
        rear->next=t;
        rear=t;
    }

}
int dequeue()
{
    int x=-1;
    Node *p;
    if(front==NULL)
    {
        cout<<"qEmpty"<<endl;
    }
    else
    {
        p=front;
        front=front->next;
        x=p->data;
        free(p);
    }
    return x;
}
void display(Node *p)
{
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    
}

void rdisplay(Node *p)
{
    if(p!=NULL)
    {
        rdisplay(p->next);
        cout<<p->data<<" ";
    }
}

// int display(int i)
// {
//     if(i>=1)
//     {
//         cout<<i<<" ";
//         i--;
//         display(i);
//      }
// }


int main(){

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    dequeue();
    dequeue();
    display(front);

    








return 0;
}