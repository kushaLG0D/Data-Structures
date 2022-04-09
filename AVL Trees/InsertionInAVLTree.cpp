#include <iostream>
using namespace std;
struct Node
{
    Node *lchild;
    int data;
    int height;
    Node *rchild;
} *root = NULL;
int Nodeheight(Node *p)
{
    int hl, hr;
    hl=p && p->lchild?p->lchild->height:0;
    hr=p && p->rchild?p->rchild->height:0;
    return hl>hr?hl+1:hr+1;
}
int balanceFactor(Node *p)
{
    int hl, hr;
    hl=p && p->lchild?p->lchild->height:0;
    hr=p && p->rchild?p->rchild->height:0;

    return hl - hr;
}
Node *LLRotation(Node *p)
{
    Node *pl = p->lchild;
    Node *plr = pl->rchild;

    pl->rchild = p;
    p->lchild = plr;

    p->height = Nodeheight(p);
    pl->height = Nodeheight(pl);

    if (p == root)
    {
        root = pl;
    }
    return pl;
}
Node *RRRotation(Node *p)
{
    Node *pr = p->rchild;
    Node *prl = pr->lchild;

    pr->lchild = p;
    p->rchild = prl;

    p->height = Nodeheight(p);
    pr->height = Nodeheight(pr);

    if (p == root)
    {
        root = pr;
    }
   return pr;

}
Node *LRRotation(Node *p)
{
    Node *pl = p->lchild;
    Node *plr = pl->rchild;

    pl->rchild = plr->lchild;
    p->lchild = plr->rchild;
    plr->lchild=pl;
    plr->rchild=p;

    pl->height = Nodeheight(pl);
    p->height = Nodeheight(p);
    plr->height=Nodeheight(plr);

    if (p == root)
    {
        root = plr;
    }
    return plr;
}
Node *RLRotation(Node *p)
{
    Node *pr = p->rchild;
    Node *prl = pr->lchild;

    pr->lchild = prl->rchild;
    p->rchild = prl->lchild;
    prl->lchild=p;
    prl->rchild=pr;
    p->height = Nodeheight(p);
    pr->height = Nodeheight(pr);
    prl->height=Nodeheight(prl);

    if (p == root)
    {
        root = prl;
    }
    return prl;
}

int height(Node *p)
{
    int x,y;
    if(p)
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
Node *rInsert(Node *p, int key)
{
    Node *t=NULL;
    if (p == NULL)
    {
        t = new Node;
        t->lchild = NULL;
        t->data = key;
        t->height = 1;
        t->rchild = NULL;
         return t;
       }
       
    if (key < p->data)
    {
        p->lchild = rInsert(p->lchild, key);
    }
    else if (key > p->data)
    {
        p->rchild = rInsert(p->rchild, key);
    }

    p->height = Nodeheight(p);
    if (balanceFactor(p) == 2 && balanceFactor(p->lchild) == 1)
    {
        return LLRotation(p);
    }
     else if (balanceFactor(p) == -2 && balanceFactor(p->rchild) == -1)
    {
        return RRRotation(p);
    } 
    else if (balanceFactor(p) == 2 && balanceFactor(p->lchild) == -1)
    {
        return LRRotation(p);
    } 
    else if (balanceFactor(p) == -2 && balanceFactor(p->rchild) == 1)
    {
        return RLRotation(p);
    }
    return p;
}
void Iinorder(Node *p)
{
    if (p)
    {
        Iinorder(p->lchild);
        cout << p->data<<" ";
        Iinorder(p->rchild);
    }
}
void preorder(Node *p)
{
    if(p)
    {   
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
Node *inPre(Node *p)
{
    while (p && p->rchild)
    {
        p=p->rchild;
    }
    return p;
}
Node *inSucc(Node *p)
{
    while (p && p->lchild)
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
        delete(p);
        return NULL;
    }
    if(key <p->data)
    {
        p->lchild=deleteNode(p->lchild,key);
    }
    else if (key >p->data)
    {
        p->rchild=deleteNode(p->rchild,key);
    }
    else 
    {
        if(height(p->lchild)>height(p->rchild))
          {  q=inPre(p);
            p->data=q->data;
            p->lchild=deleteNode(p->lchild,q->data);}
        else 
        {
            q=inSucc(p);
            p->data=q->data;
            p->rchild=deleteNode(p->rchild,q->data);
        }
    }
    p->height=Nodeheight(p);

    if(balanceFactor(p)==2 && balanceFactor(p->lchild)==1)
    {
        return LLRotation(p);
    }
     if(balanceFactor(p)==2 && balanceFactor(p->lchild)==-1)
    {
        return LRRotation(p);
    } if(balanceFactor(p)==2 && balanceFactor(p->lchild)==0)
    {
        return LLRotation(p);
    }
    return p;
}

int main()
{
    
   root=rInsert(root, 30);
    rInsert(root, 40);
    rInsert(root, 10);
    rInsert(root,20);
    rInsert(root,5);
   deleteNode(root,40);
    // rInsert(root,27);
    // rInsert(root,5);
    //rInsert(root,5);
   preorder(root);

    return 0;
}