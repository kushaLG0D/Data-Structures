#include<iostream>
using namespace std;
class Diagonal
{
    int *A;
    int n; 
    public:
    Diagonal(int size)
    {
        this->n=size;
        this->A=new int[n];
    }
    void set(int i,int j,int key);
    int get(int i,int j);
    void display();
};
void Diagonal::set(int i,int j,int key)
{
    if(i==j)
    {
        A[i-1]=key;
    }
}
int Diagonal::get(int i,int j)
{
    if(i==j)
    {
        return A[i-1];
    }
    return 0;
}
void Diagonal::display()
{
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j < n;j++) 
        {
            if(i==j)
            {
                cout<<A[i]<<" ";
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

Diagonal d1(4);


d1.set(1,1,1);
d1.set(2,2,2);
d1.set(3,3,3);
d1.set(4,4,4);

d1.display();

return 0;
}