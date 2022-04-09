#include<iostream>
using namespace std;
struct Node
{
    char data;
    Node *next;
}*top=NULL;

int isFull(struct Node *n)
{
    Node *t=new Node;
    if(t==NULL)
    {
        cout<<"Stack OverFLow"<<endl;
    }
}
int isEmpty(struct Node *n)
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}
void push(struct Node *n,char x)
{

    Node *t=new Node;
    if(t==NULL)
    {
        cout<<"Stack OverFLow"<<endl;
    }
    // if(top==NULL)
    // {
    //     top=new Node;
    //     top->data=x;
    //     top->next=NULL;
    // }
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}
char pop(struct Node *n)
{
    Node *p;char x=-1;
    if(top==NULL)
    {
        cout<<"Stack Empty"<<endl;
    }
    else
    {
        p=top;
        top=top->next;
        x=p->data;
        free(p);
    }
    return x;
}
int count(struct Node *n)
{
    int count=0;
    while (n!=NULL)
    {
        count++;
        n=n->next;
    }
    
    return count;
}
int peek(int pos)
{
    Node *p=top;int x=-1;
    if(pos<0 || pos>count(top))
    {
        return x;
    }
    if(top==NULL)
    {
        cout<<"Stack Empty"<<endl;
    }
    else{
    for (int i = 0; i <pos-1; i++)
    {
       p=p->next;
    }
        x=p->data;}
    return x;
}
char stackTop()
{
    char x=-1;
    if(top==NULL)
    {
        cout<<"Stack Empty"<<endl;
    }
    else
    {
        x=top->data;
    }
    return x;
}

void display(struct Node *n)
{
    while (n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}
int isBalance(char *exp)
{
   // struct Node st;
    for (int i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='(')
        {
            push(top,exp[i]);
        }
        else if(exp[i]==')')
        {
            if(isEmpty(top))
            {
                return 0;
            }
            else 
            {
                pop(top);
            }
        }
    }
    if(isEmpty(top))
    {
        return 1;
    }
    else {return 0;};
}
int match(char a,char b)
{
    if(a=='{' && b=='}')
    {
        return 1;
    }
    
    if(a=='[' && b==']')
    {
        return 1;
    }
    if(a=='(' && b==')')
    {
        return 1;
    }
    return 0;
}
int isBalanceAll(char *exp)
{
    
    for (int i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='('|| exp[i]=='[' || exp[i]=='{')
        {
            push(top,exp[i]);
        }
        else if(exp[i]==')' || exp[i]==']' || exp[i] == '}')
        {
                if(isEmpty(top))
                {
                    return 0;
                }
               
                char temp=pop(top);
                if(!match(temp,exp[i]))
                {
                    return 0;
                }
         }
    }
    
    
    if(isEmpty(top))
    {
        return 1;
    }
    else {return 0;};
}

int main(){


char exp[]="([[a+b]*(c-d)])"; 

cout<<isBalanceAll(exp);


// push(top,'a');
// push(top,'b');
// cout<<stackTop()<<endl;
// display(top);
return 0;
}