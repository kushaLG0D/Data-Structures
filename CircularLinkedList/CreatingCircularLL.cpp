#include<iostream>
using namespace std;
struct Node 
{
    int data;
    Node *next;
}*head;
void createF(int A[],int n)
{
    Node *t,*last;
    head=new Node;
    head->data=A[0];
    head->next=head;
    last=head;

    for(int i =1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=head;
        last->next=t;
        last=t; 
    }
}
void display(struct Node *p)
{
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    }while (p!=head);
}
int isLoop(struct Node *n)
{
    Node *p=n;
    Node *q=n;
    while(p && q && q->next)
    {
        p=p->next;
        q=q->next->next;
        if(p==q)
        {
            return 1;
        }
    }
    return 0;
}

int main(){
int A[]={10,20,30,40,50};
createF(A,5);
cout<<isLoop(head)<<endl;
display(head);



return 0;
}