#include<iostream>
using namespace std;
struct Node 
{
    int data;
    Node *next;
}*first,*second,*third=NULL;

void createF(int A[], int n)
{
    struct Node *last, *temp;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void createS(int A[], int n)
{
    struct Node *last, *temp;
    second = new Node;
    second->data = A[0];
    second->next = NULL;
    last =second;
    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display(struct Node *n)
{
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
}
void concat(struct  Node *n,struct  Node *q)
{
   third=n;
    while (n->next !=NULL)
    {
        n=n->next;
    }
    n->next=q;
    q = NULL;
}
void merge(struct Node *p,struct Node *q)
{
    struct Node *last;
    if(p->data < q->data)
    {
        third=p;
        last=p;
        p=p->next;
        last->next=NULL;
    }
    else
    {
        third=q;
        last=q;
        q=q->next;
        last->next=NULL;
    }
    while(p && q)
    {
        if(p->data < q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    while(p!=NULL)
    {
        last->next=p;
        last=p;
        p=p->next;
    }
    while(q!=NULL)
    {
        last->next=q;
        last=q;
        q=q->next;
    }
}
int main(){
    int A[]={1,2,3,4,5,6};
    int B[]={7,8,9};
// createF(A,6);
// createS(B,3);
// //merge(first,second);
// concat(first,second);
display(third);
//display(second);


return 0;
} 