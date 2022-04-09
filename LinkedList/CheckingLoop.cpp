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

void displayr(struct Node *n)
{
    if (n != NULL)
    {
        cout << n->data << " ";
        displayr(n->next);
    }
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
struct Node *t1,*t2;
t1=first->next->next;
t2=first->next->next->next->next;
t2->next=t1;
if(isLoop(first))
{
    cout<<"List have LOOp"<<endl;
}
else
{
    cout<<"List have No-LOOp"<<endl;
}
//displayr(first);

return 0;
}