#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
class LinkedList
{   
    private:
    Node *head;
    Node *second;
    Node *third;
    public:
    LinkedList(){head=NULL;};
    void createF(int A[],int n); 
    //~LinkedList();
    void createS(int A[],int n);
    void displayr(Node *p);
    void display();
    int count();
    void insert(int index,int data);
    void reverse();
    void rReverse(Node *q,Node *p);
    int deleteNode(int index);
    void insertSorted(int data);
};
void LinkedList :: createF(int A[],int n)
{
    Node *last,*t;
    head=new Node;
    head->data=A[0];
    head->next=NULL;
    last=head;

    for (int i = 1; i < n; i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void LinkedList :: createS(int A[],int n)
{
    Node *last,*t;
    second=new Node;
    second->data=A[0];
    second->next=NULL;
    last=second;

    for (int i = 1; i < n; i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int LinkedList::count()
{
    int len=0;
    Node *p=head;
    while (p!=NULL)
    {
        len++;
        p=p->next;
    }
    return len;
}
void LinkedList :: display()
{
    Node *p=head;
    if(p==NULL)
    {
        return;
        }
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
}
void LinkedList::insert(int index,int data)
{
    Node *p=head;
    if(index<0 || index >count()) 
    {
        return; 
    }
    
    Node *t=new Node;
    t->data=data;
    t->next=NULL;
    if(index == 0)
    {

        t->next=head;
        head=t;
    }
    else
    {
       // p=head;
        for (int i = 0; i < index-1; i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
         }
}
int LinkedList::deleteNode(int index)
{
    Node *p=head; int x=-1;
    if(index < 0 && index > count())
    {
        return x;
    }
    if(index == 0)
    {
        x=p->data;
        head=head->next;
        return x;
        free(p);
    }
    else
    {   
        Node *prev;
        p=head;
        prev=NULL;
        for (int i = 0; i < index; i++)
        {
            prev=p;
            p=p->next;
        }
        x=p->data;
        prev->next=p->next;
        return x;
        free(p);
     }
}
void LinkedList::displayr(Node *p)
{
    p=head;
    if(p!=NULL)
    {
        cout<<p->data;
        displayr(p->next);
    }
}
void LinkedList::reverse()
{
    Node *q=NULL;
    Node*r=NULL;
    Node *p=head;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;

        q->next=r;
    }
    head=q;

}
void LinkedList::rReverse(Node *q,Node *p)
{
    p=head;
    if(p!=NULL)
    {
        rReverse(p,p->next);
        p->next=q;
    }
    else
    {
        head=q;
    }

}
void LinkedList::insertSorted(int data)
{

    Node *p=head;
    Node *q=NULL;
    Node *t=new Node;
    t->data=data;
    while (p&& p->data < data)
    {
        q=p;
        p=p->next;
    }
    if(p==head)
    {
        t->next=head;
        head=t;
    }
    else
    {
        t->next=q->next;
        q->next=t;
    }
    

}
 
int main(){
int A[]={10,20,40,50};
LinkedList l;
l.createF(A,4); 
l.insert(2,30);
//cout<<l.deleteNode(2)<<"\n";
//Node *temp=new Node;
//l.rReverse(NULL,temp);
l.insertSorted(5);
//l.reverse();
l.display();
return 0;
}