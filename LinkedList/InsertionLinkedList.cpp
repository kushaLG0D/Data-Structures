#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
} * head, *last ;


void insertLast(int data)
{
    struct Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {

        last = temp;
        head = temp;
    }
    else
    {
        last->next = temp;
        last = temp;
    }
}

int count(struct Node *n)
{
    int count = 0;

    while (n != NULL)
    {
        count++;
        n = n->next;
    }
    return count;
}

void insert(struct  Node *n,int pos,int data)
   {
       if(pos <0 && pos>count(n))
       {
           return;
       }
       struct Node *temp=new Node;
        temp->data=data;
       if(pos==0)
       {    
           //cout<<head;
          // temp->data=data;
           temp->next=head;
           head=temp;
           //cout<<head;
          
        }
       else if(pos>0)
       {
           n=head;
           
           for (int i = 0; i < pos-1 && n; i++) //&& n to check whether n is no null;
           {
               n=n->next;
            }
          temp->next=n->next;
          n->next=temp; 
       }
   
}
void insertSorted(struct Node *n,int data)
{
    struct Node *t;
    struct Node * prev;
    t=new Node;
    t->data=data;
    t->next=NULL;
    if(head==NULL)
    {
        head=t;
    }
    else
    {
        while (n && n->data<data)
        {
            prev=n;
            n=n->next;
        }
        if(n==head)
        {
            t->next=head;
            head=t; 
        }
        else
        {
        t->next=prev->next;
        prev->next=t;
        }
    }
}
struct Node *search(struct Node *n,int key)
{
    if(head == NULL)
    {
        return NULL;
    }
    while(n!=NULL)
    {
        if(n->data == key)
        {
            return n;
        }
        n=n->next;
    }
    return NULL;
}
struct Node *MTHlinearSearch(struct Node *n,int key)
{
    struct Node *q;
    if(n==NULL)
    {
        return NULL;
    }
    while(n !=NULL)
    {
        if(n->data == key)
        {
            q->next=n->next;
            n->next=head;
            head=n;
        }
        q=n;
        n=n->next;
    }
}
Node *rlinearSearch(struct Node *n,int key)
{
    if(n==NULL)
    {
        return NULL;
    }
    if(key==n->data)
    {
        return n;
    }
    else
    {
        return rlinearSearch(n->next,key);
    }
return NULL;
}
void displayr(struct Node *n)
{
    if (n != NULL)
    {
        cout << n->data << " ";
        displayr(n->next);
    }
}
int deleteNode(struct Node *n,int pos)
{
    struct Node *prev;
    if(pos<0 && pos>count(head))
    {
        return -1;
    }
    int x;
    if(pos == 0)
    {
        head=head->next;
        x=n->data;
        return x;
        delete n;
    }
    else
    {
        n=head;
        for(int i=0;i<pos-1;i++)
        {
            prev=n;
            n=n->next;
        }
        prev->next=n->next;
        x= n->data;
        return x;
        delete n;
    }
   
}
int sorted(struct Node *n)
{
    int x=INT16_MIN;

    while(n!=NULL)
    {
        if(n->data<x)
        {
            return 0;
        }
        x=n->data;
        n=n->next;
    }
    //cout<<x;
    return 1;
}
void removeDuplicate()
{
    struct Node *p=head;
    struct Node *q=head->next;
  while (q!=NULL)
  {
      if(p->data != q->data)
      {
          p=q;
          q=q->next;
      }
      else
      {
          p->next=q->next;
          free(q);
          q=p->next;
      }
  }
  
}
void reverseLL(struct Node *n)
{
    struct Node *q=NULL;
    struct Node *r=NULL;
    while(n!=NULL)
    {
        r=q;
        q=n;
        n=n->next;
        
        q->next=r;
    }
    head=q;
}
int main(){
// {
//     insert(head,0,5);
//     insert(head,1,10);
//     insert(head,2,20);
//     insert(head,3,30);
//     insert(head,4,40);
//     insetSorted(head,45);
//     insetSorted(head,50);
   // insert(head,0,5);
   insertLast(5);
   insertLast(10);
   insertLast(20);
  
   insertSorted(head,15);
   insertLast(30);
   insertLast(40);
    insertSorted(head,25);
    insertSorted(head,30);
 
    insertLast(99);
    
    //insert(head,5,50);
    // insertSorted(head,10);
    // insertSorted(head,5);
    // insertSorted(head,90);
    // Node *temp=rlinearSearch(head,99);
    // //MTHlinearSearch(head,20);

    // if(temp)
    // {
    //     cout<<"Key Found:"<<temp->data<<endl;
    // }
    // else
    // {
    //     cout<<"Key Not Found!!"<<endl;
    // }
       //deleteNode(head,5);
//    cout<<sorted(head)<<endl;
//     if(sorted(head)==1)
//     {
//         cout<<"List is sorted!!"<<endl;
//     }
//     else
//     {
//         cout<<"List is not sorted!!"<<endl;
//     }

    removeDuplicate();
    reverseLL(head);
    displayr(head);

    return 0;
}