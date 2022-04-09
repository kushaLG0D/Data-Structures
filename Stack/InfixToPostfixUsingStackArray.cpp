#include <iostream>
#include <cstring>
using namespace std;
class Stack
{

    int top;
    int size;
    char *S;

public:
    Stack(int size);
    void push(char x);
    char pop();
    int isFull();
    int isEmpty();
    char peek(int pos);
    char stackTop();
    void display();
};
Stack::Stack(int size)
{
    this->size = size;
    this->S = new char[size];
    this->top = -1;
}
int Stack ::isFull()
{
    if (top == size - 1)
    {
        return 1;
    }
    return 0;
}
int Stack ::isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}
void Stack::push(char x)
{
    if (isFull())
    {
        cout << "Stack OverFlow" << endl;
    }
    else
    {
        top++;
        S[top] = x;
    }
}
char Stack::pop()
{
    char x = -1;
    if (isEmpty())
    {
        cout << "Stack Empty" << endl;
    }
    else
    {
        x = S[top];
        top--;
    }
    return x;
}
void Stack::display()
{
    for (int i = 0; i <= top; i++)
    {
        cout << S[i] << endl;
    }
}
char Stack::peek(int pos)
{
    char x = -1;
    if (top - pos + 1 > 0 || top - pos + 1 == size)
    {
        return x;
    }
    if (!isEmpty())
    {
        x = S[top - pos + 1];
    }
    return x;
}
char Stack::stackTop()
{
    char x=-1;
    if(isEmpty())
    {
        return x;
    }
    else { x=S[top];}
    return -1; 
}
int isOperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
    {
        return 1;
    }
    return 0;
}
int pre(char x)
{
    if (x == '+' || x == '-')
    {
        return 1;
    }
    if (x == '*' || x == '/')
    {
        return 2;
    }
    return 0;
}

char *InToPos(char *infix)
{
    
    int len = strlen(infix);
    Stack st(len);
    st.push('#');
    char *postfix = new char[len + 2];
    
    int i = 0;
    int j = 0;

    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            //char temp = st.stackTop();
            if (pre(infix[i]) > pre(st.stackTop()))
            {
                st.push(infix[i]);
                i++;
            }
            else
            {
                postfix[j] = st.pop();
                j++;
            }
        }
    }
    while (!st.isEmpty())
    {
        postfix[j] = st.pop();
        j++;
    }
    postfix[j] = '\0';

    return postfix;
}

int main()
{

    // int size;
    // cout<<"Enter size of the Array"<<endl;
    // cin>>size;

    

    // st.push('a');
    // st.push('b');
    // cout<<st.stackTop()<<endl;
    // st.display();

    char *infix = "x+b";
   //nt size=strlen(infix);
 //   Stack st(size);
    char *post=InToPos(infix);
    cout<<post<<endl;
    return 0;
}