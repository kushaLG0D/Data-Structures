#include<iostream>
using namespace std;
struct Matrix
{
    int n;
    int *A;
};
void set(struct Matrix *m,int i,int j,int key)
{
    int index;
    if(i-j==0)
    {
        index=(m->n-1)+j-1;
        m->A[index]=key;
    }
    else if(i-j==1)
    {
        index=(j-1);
        m->A[index]=key;
     }
     else if(i-j==-1)
     {
         index=(2*m->n-1)+i-1;
         m->A[index]=key;
     }
}
void display(struct Matrix *m)
{
    for (int i = 1; i <= m->n; i++)
    {
        for (int j = 1; j <= m->n; j++)
        {
            int index;
               if(i-j==0)
    {
        index=(m->n-1)+j-1;
        cout<<m->A[index]<<" ";
    }
    else if(i-j==1)
    {
       index=(j-1);
        cout<<m->A[index]<<" ";
     }
     else if(i-j==-1)
     {
         index=(2*m->n-1)+i-1;
         cout<<m->A[index]<<" ";
     }
     else{
         cout<<0<<" ";
     }
        }
        cout<<"\n";
        
    }
    

}

int main(){

struct Matrix m;
cout<<"Enter the no of dimension"<<endl;
cin>>m.n;
m.A=new int[3*m.n-2];
int size=3*m.n-2;

for (int i = 0; i <size; i++)
{
    
            int key;
            cout<<"Enter the key"<<"("<<i<<"):";
            cin>>key;
           m.A[i]=key;
} 
cout<<"==========================\n";
//displayArray(m);
cout<<"==========================\n";

display(&m);






return 0;
}