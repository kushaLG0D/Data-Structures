#include<iostream>
using namespace std;
struct Matrix
{
    int A[10];
    int n;
};
void set(struct Matrix *m,int i,int j,int key)
{
    if(i==j)
    {
        m->A[i-1]=key;
    }
}
int get(struct Matrix m,int i,int j)
{
    if(i==j)
    {
        return m.A[i-1];
    }
    return 0;
}
void display(struct Matrix &m)
{
    for (int i = 0; i <m.n; i++)
    {
        for (int j = 0; j<m.n; j++)
        {
            if(i==j)
            {
                cout<<m.A[i]<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<"\n";
    }
    
}

int main(){

struct Matrix m1;
m1.n=4;

set(&m1,1,1,1);
set(&m1,2,2,2);
set(&m1,3,3,3);
set(&m1,4,4,4);

display(m1);






return 0;
}