#include<iostream>
using namespace std;
struct Node
{
     Node *prev;
    int data;
    Node *next;
}*head=NULL;

void insert(int pos,int X)
{
    Node *t;Node *p;
    if(pos==0)
    {
    if(head == NULL)
    {
        t=new Node;
        t->prev=NULL;
        t->data=X;
        t->next=NULL;
        head=t;
    }
   else
    {
        t=new Node;
        t->prev=NULL;
        t->data=X;
        t->next=head;
        head->prev=t;
        head =t;
     }
    }
    else
    {
        p=head;
        for(int i=0;i<pos-1;i++)
        {
            p=p->next;
        }
        t=new Node;
        t->data=X;
        t->next=p->next;
        t->prev=p;
        if(p->next)
        p->next->prev=t;
        p->next=t;
    }
}
void rdisplay(struct Node *n)
{
    if(n!=NULL)
    {
        cout<<n->data<<" ";
        rdisplay(n->next);
    }
}
int deleteNode(int pos)
{
    Node *p,*q;int x=-1;
    p=head;
    if(pos==0)
    {
        x=p->data;
        head=head->next;
        delete p;
        if(head)
        {
            head->prev=NULL;
        }
    }
    else
    {
        p=head;
        for (int i = 0; i < pos-1; i++)
        {
            p=p->next;
        }
       
        x=p->data;
        if(p->next)
        {
        p->prev->next=p->next;
        p->next->prev=p->prev;
        }
        p->prev->next=NULL;
        delete p;
    }
    return x;
}
int main(){
insert(0,10);
insert(1,20);
insert(0,5);
insert(3,25);
insert(2,15);
cout<<deleteNode(0)<<endl; 
rdisplay(head);

return 0;
}