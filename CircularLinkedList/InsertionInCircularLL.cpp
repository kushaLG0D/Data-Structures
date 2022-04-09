#include<iostream>
using namespace std;
struct Node 
{
    int data;
    Node *next;
}*head=NULL;
void insert(int pos,int X)
{
    Node *t;Node *p;
    if(pos==0)
    {
        t=new Node;
        t->data=X;
        if(head == NULL)
        {
            head=t;
            head->next=head;
        }
        else
        {
            p=head;
            while (p->next!=head)
            {
                p=p->next;
            }
            p->next=t;
            t->next=head;
            head=t;
        }
    }
    else
    {
        p=head;
        for (int i = 0; i < pos-1; i++)
        {
            p=p->next;
        }
            t=new Node;
            t->data=X;
            t->next=p->next;
            p->next=t;
    }    
}
int deleteNode(int pos)
{
    Node *p,*q;int X;
    if(pos==0)
    {
        p=head;
        while (p->next!=head)
        {
            p=p->next;
        }
          X=head->data;
        if(p==head)
        {
          
            delete p;
            p=NULL;
        }
      
       p->next=head->next;
       delete head;
       head=p->next;
       
    }
    else 
    {
        p=head;
        for (int i=0;i<pos-1;i++)
        {
           
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        X=q->data;
        delete q;
    }
    return X;
}
void display(struct Node *n)
{
    do
    {
        cout<<n->data<<" ";
        n=n->next;
    } while (n!=head);
    
}
int main(){

insert(0,10);
insert(1,20);
insert(0,5);
insert(2,15);
// cout<<deleteNode(0)<<endl;
// cout<<deleteNode(2)<<endl; 
// deleteNode(1);
// deleteNode(0);
display(head); 


return 0;
}