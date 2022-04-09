#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

struct Node
{
    Node *lchild;
    int x;
    Node *rchild;
}*root=NULL;

struct Queue
{
    int size;
    int rear;
    int front;
    Node **S;
};
void create(Queue *q,int size)
{
    q->size=size;
    q->rear=-1;
    q->front=-1;
    q->S=new Node*[size];
}
int isFull(Queue *q)
{
    if(q->rear == q->size-1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(Queue *q)
{
    if(q->rear==q->front)
    {
        return 1;
    }
    return 0;
}
void enqueue(Queue *q,Node *x)
{
    if(isFull(q))
    {
        cout<<"Queue Full"<<endl;
    }
    else
    {
        q->rear++;
        q->S[q->rear]=x;
    }
}
Node *dequeue(Queue *q)
{
    Node *x;
    if(isEmpty(q))
    {
        cout<<"Stack Empty";
    }
    else
    {
        q->front++;
        x=q->S[q->front];
    }
    return x;
}
void createTree()
{
    Node *t;Node*p;
    int x;
    cout<<"Enter the value in the root"<<endl;
    cin>>x;
    struct Queue q;
    create(&q,50);
    root=new Node;
    root->x=x;
    root->lchild=NULL;
    root->rchild=NULL;
    enqueue(&q,root);

    while(!isEmpty(&q))
    {
        p=dequeue(&q);
        cout<<"Enter the left child "<<p->x<<":"<<endl;
        cin>>x;
        if(x!=-1)
        {
            t=new Node;
            t->x=x;
            t->lchild=NULL;
            t->rchild=NULL;
            p->lchild=t;
            enqueue(&q,t);
        }
         cout<<"Enter the right child "<<p->x<<":"<<endl;
        cin>>x;
        if(x!=-1)
        {
            t=new Node;
            t->x=x;
            t->lchild=NULL;
            t->rchild=NULL;
            p->rchild=t;
            enqueue(&q,t);
        }

    }

}
void preorder(Node *p)
{

    if(p)
    {
    cout<<p->x<<" ";
    preorder(p->lchild);
    preorder(p->rchild);
    }
    
}
void inorder(Node *p)
{
    if(p)
    {
        inorder(p->lchild);
        cout<<p->x<<" ";
        inorder(p->rchild);
    }
} 
void postorder(Node *p)
{
    if(p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->x<<" ";
    }
  
}




int main(){


    createTree();
    // preorder(root);
    // inorder(root);
    // postorder(root);












return 0;
}