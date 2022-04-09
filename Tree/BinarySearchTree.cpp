#include<iostream>
using namespace std;
struct Node
{
    Node *lchild;
    int data;
    Node *rchild;
}*root=NULL;
int height(Node *p)
{
    int x;int y;
   if (p!=NULL)
   {
       x=height(p->lchild);
       y=height(p->rchild);
       if(x>y)
       {
           return x+1;
       }
       else{return y+1;}
   }
   return 0;
}
Node *inPre(Node *p)
{
    while(p && p->rchild!=NULL)
    {
        p=p->rchild;
    }
    return p;
}
Node *inSucc(Node *p)
{
    while (p && p->lchild!=NULL)
    {
        p=p->lchild;
    }
    return p;
}
Node *deleteNode(Node *p,int key)
{
    Node *q; 
    if(p==NULL)
    {
        return NULL;
    }
    if(p->lchild==NULL && p->rchild==NULL)
    {
        
        if(p==root)
        {
           root=NULL;
        }
        delete p;
        return NULL;
    }
    if(key<p->data)
    {
        p->lchild=deleteNode(p->lchild,key);
    }
    else if(key>p->data)
    {
        p->rchild=deleteNode(p->rchild,key);
    }
    else 
    {
       if(height(p->lchild)>height(p->rchild)) 
       {
           q=inPre(p->lchild);
           p->data=q->data;
           p->lchild=deleteNode(p->lchild,q->data);
        }
       else
       {
           q=inSucc(p->rchild);
           p->data=q->data;
           p->rchild=deleteNode(p->rchild,q->data);
       }
    }
    return p;
}

void insertBST(int key)
{
    Node *p=root;
    Node *t;
    Node *r;
    if(root==NULL)
    {
        t=new Node;
        t->data=key;
        t->lchild=NULL;
        t->rchild=NULL;
        root=t;
        return;
    }
    while(p!=NULL)
    {
        r=p;
        if(key==p->data)
        {
            return;
        }
        else if (key<p->data)
        {
            p=p->lchild;
        }
        else
        {
            p=p->rchild;
        }
    }
        t=new Node;
        t->data=key;
        t->lchild=NULL;
        t->rchild=NULL;
        if(r->data>t->data)
        {
            r->lchild=t;
        }
        else
        {
            r->rchild=t;
        }
    
}
void inorder(Node *p)
{
    if(p!=NULL)
    {
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
}
Node *binarySearch(int key)
{
    Node *p=root;
    while (p)
    {
        if(p->data==key)
        {
            return p;
        }
        else if (p->data>key)
        {
            p=p->lchild;
        }
        else
        {
            p=p->rchild;
        }
    }
    return p;
}
Node *rinsertBST(Node *p,int key)
{
    Node *t;
    if(p==NULL)
    {
        t=new Node;
        t->data=key;
        t->rchild=NULL;
        t->lchild=NULL;
        return t;
    }
    // if(key==p->data)
    // {
    //     return;
    // }
    if(key<p->data)
    {
        p->lchild=rinsertBST(p->lchild,key);
    }
    else if(key>p->data)
    {
        p->rchild=rinsertBST(p->rchild,key);
    }
}



int main(){


    insertBST(30);
    insertBST(20);
    insertBST(10);
    insertBST(25);
    insertBST(40);
    insertBST(35);
    insertBST(45);
    insertBST(42);
    insertBST(43);
    Node *t=deleteNode(root,30);
   // Node *p=deleteNode(root,6);
    //cout<<p<<"\n";
    //cout<<t->rchild->rchild->lchild->rchild->data<<"\n";
    inorder(root);
    

return 0;
}