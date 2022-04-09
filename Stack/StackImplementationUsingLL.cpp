#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
}*top=NULL;

int isFull(struct Node *n)
{
    Node *t=new Node;
    if(t==NULL)
    {
        cout<<"Stack OverFLow"<<endl;
    }
}
int isEmpty(struct Node *n)
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}
void push(struct Node *n,int x)
{
    Node *t=new Node;
    if(t==NULL)
    {
        cout<<"Stack OverFLow"<<endl;
    }
    if(top==NULL)
    {
       t->data=x;
       t->next=NULL;
       top=t;
    }
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}
int pop(struct Node *n)
{
    Node *p;int x=-1;
    if(top==NULL)
    {
        cout<<"Stack Empty"<<endl;
    }
    else
    {
        p=top;
        top=top->next;
        x=p->data;
        free(p);
    }
}
int count(struct Node *n)
{
    int count=0;
    while (n!=NULL)
    {
        count++;
        n=n->next;
    }
    
    return count;
}
int peek(int pos)
{
    Node *p=top;int x=-1;
    if(pos<0 || pos>count(top))
    {
        return x;
    }
    if(top==NULL)
    {
        cout<<"Stack Empty"<<endl;
    }
    else{
    for (int i = 0; i <pos-1; i++)
    {
       p=p->next;
    }
        x=p->data;}
    return x;
}
int stackTop(struct Node *n)
{
    int x=-1;
    if(top==NULL)
    {
        cout<<"Stack Empty"<<endl;
    }
    else
    {
        x=top->data;
    }
    return x;
}

void display(struct Node *n)
{
    while (n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}

int main(){

push(top,5);
push(top,10);
// pop(top);
// pop(top);
// cout<<stackTop(top)<<endl;
// cout<<peek(2)<<endl;
display(top);
return 0;
}