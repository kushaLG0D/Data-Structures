#include<iostream>
#include <cstring>
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
void push(char x)
{

    Node *t=new Node;
    if(t==NULL)
    {
        cout<<"Stack OverFLow"<<endl;
    }
   
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}
char pop()
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
int isOperand(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='/')
    {
        return 0;
    }
   return 1;
    
}
int pre(char x)
{
    if(x=='+' || x=='-')
    {
        return 1;
    }
    else if(x=='*' || x=='/')
    {
        return 2;
    }
    return 0;
}

char *InToPos(char infix[])
{
    int len=strlen(infix);
    char *postfix=new char[len+2];
    int i=0;
    int j=0;
    while(infix[i]!='\0')
    {
        if(isOperand(infix[i]))
        {
            postfix[j]=infix[i];
            i++;
            j++;
        }
        else 
        {
            if(pre(infix[i])>pre(top->data))
            {
                push(infix[i]);
                i++;
            }
            else
            {
                postfix[j]=pop();
                j++;
            }
        }  
     }
     while (top!=NULL)
     {
         postfix[j]=pop();
         j++;
     }
        postfix[j]='\0';

        return postfix;
}
int main(){

    char *infix="a+b";
  
   push('#');
    //display(top);
    char *postfix=InToPos(infix);
    cout<<postfix<<endl;

return 0;
}