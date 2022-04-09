#include<iostream>
using namespace std;
struct Array{
    int *A;
    int n;
};
void createArray(struct Array *a)
{
    cout<<"Enter size of Array:";
    cin>>a->n;
    a->A=new int[a->n];
    for(int i=0;i<a->n;i++)
    {
        int key;
        cout<<"Enter the element "<<i<<":";
        cin>>key;
        a->A[i]=key;
    }
}
void display(struct Array a)
{
    for (int i = 0; i < a.n; i++)
    {
        cout<<a.A[i]<<" ";
    }
}
void append(struct Array *a,int key)
{
    a->A[a->n]=key;
    a->n++;
}
void insert(struct Array *a,int index,int key)
{
    for (int i = a->n; i>index; i--)
    {
        a->A[i]=a->A[i-1];
    }
    a->A[index]=key;
    a->n++;
}
void remove(struct Array *a,int index){
    for (int i = index; i < a->n-1; i++)
    {
        a->A[i]=a->A[i+1];
    }
    a->n--;
}
int main(){
    struct Array a1;
   createArray(&a1);
   append(&a1,60);
   insert(&a1,2,30);
   remove(&a1,0);
   display(a1);
    

return 0;
}