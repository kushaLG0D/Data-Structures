#include<iostream>
using namespace std;
struct Matrix
{
    int n;
    int *S;
    int size;
};
void rsetUpper(struct Matrix *m,int i,int j,int key)
{
    if(i<=j)
    {
        m->S[m->n*((i-1)+(i-2)*(i-1)/2+j-i)]=key;
    }
}
void rdisplayUpper(struct Matrix m)
{
    for (int i = 1; i <=m.n; i++)
    {
        for (int j = 1; j <=m.n; j++)
        {
            if(i<=j)
            {
                cout<< m.S[m.n*((i-1)+(i-2)*(i-1)/2+j-i)]<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<" \n";
    }
    
}

void rsetLower(struct Matrix *m,int i,int j,int key)
{
    if(i>=j)
    {
        m->S[(i*(i-1)/2)+j-1]=key;
    }
}
void rdisplayLower(struct Matrix m)
{
    for (int i = 1; i <=m.n; i++)
    {
        for (int j = 1; j <=m.n; j++)
        {
            if(i>=j)
            {
                cout<<m.S[(i*(i-1)/2)+j-1]<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<" \n";
    }
    
}
void csetLower(struct Matrix *m,int i,int j,int key)
{
    if(i>=j)
    {
        m->S[(m->n*(j-1)+(j-2)*(j-1)/2+i-j)]=key;
    }
}
void cdisplayLower(struct Matrix m)
{
    for (int i = 1; i <=m.n; i++)
    {
        for (int j = 1; j <=m.n; j++)
        {
            if(i>=j)
            {
                cout<<m.S[(m.n*(j-1)+(j-2)*(j-1)/2+i-j)]<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<" \n";
    }
    
}
void setDiagonal(struct Matrix *m,int i,int j,int key)
{
    if(i==j)
    {
        m->S[i]=key;
    }
}
void displayDiagonal(struct Matrix m)
{
    for (int i = 1; i <=m.n; i++)
    {
        for (int j = 1; j <=m.n; j++)
        {
            if(i==j)
            {
                cout << m.S[i]<<" ";
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
    cout<<"Enter the dimension of matrix"<<endl;
    cin>>m.n;
    m.size=m.n*(m.n+1)/2;
    m.S=new int[m.size];

    
    rsetUpper(&m,1,1,10);
    rsetUpper(&m,1,2,20);
    rsetUpper(&m,1,3,30);
    rsetUpper(&m,2,2,30);
    rsetUpper(&m,2,3,50);
    rsetUpper(&m,3,3,60);  

    rdisplayUpper(m);















    // csetLower(&m,1,1,10);
    // csetLower(&m,2,1,20);
    // csetLower(&m,2,2,30);
    // csetLower(&m,3,1,40);
    // csetLower(&m,3,2,50);
    // csetLower(&m,3,3,60);  
    
    // cdisplayLower(m);

    // setDiagonal(&m,1,1,10);
    // setDiagonal(&m,2,2,20);
    // setDiagonal(&m,3,3,30);
    // setDiagonal(&m,4,4,40);

    // displayDiagonal(m);
return 0;
}