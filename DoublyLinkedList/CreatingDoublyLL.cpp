#include<iostream>
using namespace std;
struct Node
{
     Node *prev;
    int data;
    Node *next;
}*head=NULL;

void createNode(int A[],int n)
{
    Node *t;Node *last;
    head=new Node;
    head->prev=NULL;
    head->data=A[0];
    head->next=NULL;
    last=head;

    for (int i=1;i<n;i++)
    {
        t=new Node;
        t->prev=last;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
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
int main(){
int A[]={1,2,3,4,5};
createNode(A,5);
rdisplay(head);
return 0;
}