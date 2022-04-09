#include<iostream>
using namespace std;
struct Matrix
{
    int *A;
    int n;
};
void set(struct Matrix *m,int i,int j,int key)
{
    if(i>=j)
    {
        m->A[(i*(i-1)/2)+j-1]=key;
    }
}
int get(struct Matrix m,int i,int j)
{
    if(i>=j)
    {
        return m.A[(m.n*(m.n-1)/2)+j-1];
    }
    return 0;
}
void display(struct Matrix &m)
{
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            if(i>=j)
            {
                int ele=m.A[(i*(i-1)/2)+j-1];
                cout<<ele<<" ";
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
int size;
cout<<"Enter The Dimension of matix"<<endl;
cin>>m.n;
size=m.n*(m.n+1)/2;
m.A=new int[size];

for (int i = 1; i <=m.n; i++)
{
    for (int j = 1; j <= m.n; j++)
    {
        if(i>=j)
        {
        int key;
        cout<<"Enter the key element:"<<i<<","<<j<<':';
        cin>>key;
        set(&m,i,j,key);
        }
        
    }
}




display(m);


return 0;
}