#include<iostream>
using namespace std;
struct Stack
{
    int size;
    int top;
    int *S;
};

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
void push(struct Stack *st,int x)
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
int pop(struct Stack *st)
{
    int x=-1;
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
int peek(struct Stack st,int pos)
{
    int x=-1;
    if(st.top==-1)
    {
        cout<<"Stack Empty..!!"<<endl;
    }
    if((st.top-pos+1)<0 && pos>st.top)
    {
        cout<<"Position invalid"<<endl;
    }
    else
    {
        x=st.S[st.top-pos+1];
    }
    return x;
}
int stackTop(struct Stack st)
{
    int x;
    if(st.top==-1)
    {
        x=-1;
    }
    else
    {
        x=st.S[st.top];
    }
    return x;
}
void display(struct Stack st)
{
    for (int i = 0; i <=st.top; i++)
    {
        cout<<st.S[i]<<" ";
    }
}

int main(){
    // struct Stack st;
    // cout<<"Enter the size of array"<<endl;
    // cin>>st.size;
    // st.S=new int[st.size];
    // st.top=-1;

    // push(&st,5);
    // push(&st,10);
    // push(&st,15);
    // push(&st,20);
    // pop(&st);
    // cout<<stackTop(st)<<endl;
    // cout<<peek(st,2)<<endl;
    // display(st);




    return 0; 
}