#include<iostream>
using namespace std;
struct Matrix
{
    int n;
    int *A;
};
void setr(struct Matrix *m ,int i,int j,int key)
{
    if(i<=j)
    {
        m->A[m->n*(i-1)+((i-2)*(i-1)/2)+j-i] = key;
    }
}
void setc(struct Matrix *m,int i,int j,int key)
{
    if(i<=j)
    {
        m->A[(j*(j-1)/2)+i-1]=key;
    }
}
void display(struct Matrix m)
{
    for(int i=1;i<=m.n;i++)
    {
        for (int j = 1; j<=m.n; j++)
        {
            if(i<=j)
            {
                cout<<m.A[(j*(j-1)/2)+i-1]<<" ";
            }
            else 
            {
                cout<<0<<" ";
            } 
        }
        cout<<"\n";
    }
}
void displayArray(struct Matrix m)
{
    int size=m.n*(m.n+1)/2;
    for(int i=0;i<size;i++)
    {
        cout<<m.A[i]<<" ";
    }
}
int main()
{
    struct Matrix m;
    cout<<"Enter the size of dimension";
    cin>>m.n;

    m.A=new int[m.n*(m.n+1)/2];

    for (int i=1;i<=m.n;i++)
    {
        for (int j = 1; j <=m.n; j++)
        {
            if(i<=j)
            {
                int key;
                cout<<"Enter the key"<<"("<<i<<","<<j<<"):";
                cin>>key;
                setc(&m,i,j,key);
            }
        }
        
    }


    display(m);
    cout<<"\n=====================\n";
    displayArray(m);






return 0;
}