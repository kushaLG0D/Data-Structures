#include<iostream>
using namespace std;
class Node{
    public:
    Node *lchild;
    int data;
    Node *rchild;
};
struct Stack
{
    int size;
    int top;
    Node **S;
};
void sCreate(struct Stack *st,int size)
{
    st->size=size;
    st->top=-1;
    st->S=new Node*[size];
}
int isFull(struct Stack st)
{
    if(st.top==st.size-1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct Stack st)
{
    if(st.top==-1)
    {
        return 1;
    }
    return 0;
}
void push(struct Stack *st,Node *x)
{
    if(st->top==st->size-1)
    {
        cout<<"Stack Full...!!"<<endl;
    }
    else
    {
        st->top++;
        st->S[st->top]=x;
    }
}
Node *pop(struct Stack *st)
{
    Node *x=NULL;
    if(st->top==-1)
    {
        cout<<"Stack Empty...!!"<<endl;
    }
    else
    {
       x=st->S[st->top];
        st->top--;
    }
    return x;
}


class CircularQueue{
    private:
    int size;
    int front;
    int rear;
    Node **S;
    public:
    CircularQueue(int size);
    CircularQueue();
    bool isEmpty();
    bool isFull();
    Node *dequeue();
    void enqueue(Node *p);
};
CircularQueue ::CircularQueue(int size)
{
    this->size = size;
    this->front=0;
    this->rear=0;
    this->S=new Node*[size];
}
bool CircularQueue::isEmpty()
{
    if(front == rear)
    {
        return 1;
    }
    return 0;
}
bool CircularQueue::isFull()
{
    if((rear+1)%size==front)
    {
        return 1;
    }
    return 0;
}
void CircularQueue::enqueue(Node *p)
{
    if(isFull())
    {
        cout<<"qFull"<<endl;
    }
    else
    {
        rear=(rear+1)%size;
        S[rear]=p;
    }
}
Node *CircularQueue::dequeue()
{
    Node *x=NULL;
    if(isEmpty())
    {
        cout<<"qEmpty"<<endl;
    }
    else 
    {
        front=(front+1)%size;
        x=S[front];
    }
}
class Tree
{
    Node *root;
    public:
    Tree(){root=NULL;}
    void create();
    void preorder(Node *p);
    void inorder(Node *p);
    void postorder(Node *p);
    void levelorder(Node *p);
    void Ipreorder();
    void Iinorder();
    void levelorder();
    int height(Node *p);
    Node *deleteNode(Node *p,int key);
    Node *binarySearch(Node *p,int key);
    Node *inPre(Node *p);
    Node *inSucc(Node *p);
     Node *getRoot(){
        return root;
    }
};
void Tree::create()
{
    Node *p;Node *t;
    int x;
    CircularQueue q(10);
    cout<<"Enter the value of root node"<<endl;
    cin>>x;
    root=new Node;
    root->data=x;
    root->lchild=NULL;
    root->rchild=NULL;
    q.enqueue(root);

    while (!q.isEmpty())
    {   
        p=q.dequeue();
        cout<<"Enter lchild value"<<p->data<<":"<<endl;
        cin>>x;
        if(x!=-1)
        {
            t=new Node;
            t->data=x;
            t->lchild=NULL;
            t->rchild=NULL;
            p->lchild=t;
            q.enqueue(t);
        }
      
        cout<<"Enter rchild value"<<p->data<<":"<<endl;
        cin>>x;
        if(x!=-1)
        {
            t=new Node;
            t->data=x;
            t->lchild=NULL;
            t->rchild=NULL;
            p->rchild=t;
            q.enqueue(t);
        }
        
    }
}
void Tree::preorder(Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void Tree::Ipreorder()
{
    Node *p=root;
    struct Stack st;
    sCreate(&st,10);
    while (p || !isEmpty(st))
    {
        if(p)
        {
            push(&st,p);
            cout<<p->data<<" ";
            p=p->lchild;
        }
        else
        {
            p=pop(&st);
            p=p->rchild;
        }
    }
}
void Tree::Iinorder()
{
    Node *p=root;
    struct Stack stk;
    sCreate(&stk,10);
    while (p || !isEmpty(stk))
    {
        if(p)
        {
            push(&stk,p);
            p=p->lchild;
        }
        else
        {
            p=pop(&stk);
            cout<<p->data<<" ";
            p=p->rchild;
        }
    }
    
}
void Tree::levelorder()
{
    Node *p=root;
    CircularQueue q(20);
    cout<<p->data<<" ";
    q.enqueue(p);

    while(!q.isEmpty())
    {
        p=q.dequeue();
        if(p->lchild)
        {
            cout<<p->lchild->data<<" ";
            q.enqueue(p->lchild);
        } 
        if(p->rchild)
        {
            cout<<p->rchild->data<<" ";
            q.enqueue(p->rchild);
        }
  }
}
int Tree::height(Node *p)
{
    int x,y;
    if(p!=NULL)
    {
        x=height(p->lchild);
        y=height(p->rchild);
        if(x>y)
        return x+1;
        else 
        return y+1;
    }
    return 0;
}
Node *Tree::binarySearch(Node *p,int key)
{
    if(p==NULL)
    {
        return NULL;
    }
    if(key==p->data)
    {
        return p;
    }
    if(key>p->data)
    {
        return binarySearch(p->lchild,key);
    }
    else
    {
        return binarySearch(p->rchild,key);
    }
}
Node *Tree::inPre(Node *p)
{
    while(p && p->rchild!=NULL)
    {
        p=p->rchild;
    }
    return p;
}
Node *Tree::inSucc(Node *p)
{
    while (p && p->lchild!=NULL)
    {
        p=p->lchild;
    }
    return p;
}
Node *Tree::deleteNode(Node *p,int key)
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
int main(){

    Tree t;
    t.create();
    // int i=t.height(t.getRoot());
    // cout<<i;
    //t.Ipreorder();
    // t.Iinorder();
     // t.preorder(t.getRoot());
     //t.levelorder();

return 0;
}