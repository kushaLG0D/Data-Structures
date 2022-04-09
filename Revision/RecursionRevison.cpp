#include<iostream>
using namespace std;
void head(int n)
{
    if(n>0)
    {
        head(n-1);
        cout<<n<<endl;
    }
}
void tail(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        tail(n-1);
    }
}

void tree(int n)
{
    if(n==0)
    {
        cout<<n<<endl;
    }
    else{
        tree(n-1);
        cout<<n<<endl;
        tree(n-1);
    }
}
void lshit(int A[],int m)
{
    for (int i = m-1; i >0 ; i++)
    {
        A[i-1]=A[i];
    }
    A[m-1]=0;
    
}
void display(int A[],int m)
{
    for (int i = 0; i < m; i++)
    {
        cout<<A[i]<<" ";
    }
    
}
int main(){
//head(3);
//tail(3);
int A[]={1,2,3,4,5};
lshit(A,5);
display(A,5);

//tree(3);
return 0;
}