#include<iostream>
using namespace std;
struct Matrix{
    int *A;
    int n;
};
void setMatrix(struct Matrix *m,int i,int j,int key)
{
    if(i==j)
    {
        m->A[i-1]=key;
    }
}
void displayMatrix(struct Matrix *m)
{
    for (int i = 1; i <=m->n; i++)
    {
        for (int j = 1;j <=m->n; j++)
        {
            if(i==j)
            {
                cout<<m->A[i-1]<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<"\n";
    }
}
int main(){
   struct Matrix m;
    cout<<"Enter dimension n"<<endl;
    cin>>m.n;
    m.A=new int[m.n];
    for (int i = 1; i <=m.n; i++)
    {
        for (int j = 1; j<=m.n; j++)
        {
            int key;
            if(i==j)
            {
            
            cout<<"Enter the key"<<"("<<i<<","<<j<<"):";
            cin>>key;
            }
             setMatrix(&m,i,j,key);
        }
    }
    displayMatrix(&m);

return 0;
}