#include<iostream>
using namespace std;
class LowerTriangular
{
    int *A;
    int n;
    public:
    LowerTriangular(int size)
    {
        this->n=size;
        this->A=new int[n*(n+1)/2];   
    }
    void setUsingRow(int i,int j,int key);
    void setUsingColumn(int i,int j,int key);
    int getUsingRow(int i,int j);
    int getUsingColumn(int i,int j);
    void displayUsingRow();
    void displayUsingColumn();

};
void LowerTriangular :: setUsingRow(int i,int j,int key)
{
    if(i>=j)
    {
        A[(i*(i-1)/2)+j-1]=key;
    }
}
void LowerTriangular :: setUsingColumn(int i,int j,int key)
{
    if(i>=j)
    {
        A[n*(j-1)+((j-2)*(j-1)/2)+i-j]=key;
    }
}
int LowerTriangular :: getUsingColumn(int i,int j)
{
    if(i>=j)
    {
        return A[n*(j-1)+((j-2)*(j-1)/2)+i-j];
    }

    return 0;
}
int LowerTriangular :: getUsingRow(int i,int j)
{
    if(i>=j)
    {
        return A[(i*(i-1)/2)+j-1];
    }
    return 0;
}
void LowerTriangular::displayUsingColumn()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i>=j)
            {
            cout<<A[n*(j-1)+((j-2)*(j-1)/2)+i-j]<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<"\n";
    }
}
void LowerTriangular::displayUsingRow()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i>=j)
            {
            cout<<A[(i*(i-1)/2)+j-1]<<" ";
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

LowerTriangular lt(3);

lt.setUsingColumn(1,1,1);
lt.setUsingColumn(2,1,1);
lt.setUsingColumn(3,1,1);
lt.setUsingColumn(2,2,1);
lt.setUsingColumn(3,2,1);
lt.setUsingColumn(3,3,1);

lt.displayUsingColumn();
cout<<"=============================\n";

lt.setUsingRow(1,1,1);
lt.setUsingRow(2,1,1);
lt.setUsingRow(2,2,1);
lt.setUsingRow(3,1,1);
lt.setUsingRow(3,2,1);
lt.setUsingRow(3,3,1);

lt.displayUsingRow();












return 0;
}