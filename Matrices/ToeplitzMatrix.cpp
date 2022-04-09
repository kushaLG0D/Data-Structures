#include<iostream>
using namespace std;
struct Matrix
{
    int *A;
    int n;
  
};
// void set(struct Matrix *m,int i,int j,int key)
// {
//     if(i<=j)//In Upper Triangular part,
//     {
//         m->A[j-i]=key;
//     }
//     else if(i>j)//In Lower Triangular part,
//     {
//         m->A[m->n+i-j-1]=key;
//     }
// }
void display(struct Matrix m)
{
    for(int i=1;i<=m.n;i++)
    {
        for (int j=1;j<=m.n;j++)
        {
            if(i<=j)
            {
                cout<<m.A[j-i]<<" ";
            }
            else if(i>j)
            {
                cout<<m.A[m.n+i-j-1]<<" ";
            }
        }
        cout<<"\n";
    }
}
int main(){

struct Matrix m;
cout<<"Enter The Dimension Of Matrix"<<endl;
cin>>m.n;
m.A=new int[m.n+m.n-1];
int size=m.n+m.n-1;

for (int i = 0; i <size; i++)
{
    cout<<"Enter key element"<<endl;
    cin>>m.A[i];
}

display(m);



return 0;
}