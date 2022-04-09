#include<iostream>
using namespace std;
struct Array
{
    int A[20];
    int length;
};
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void insertAtSortedIndex(struct Array &a,int key)
{
    int i=a.length;
    while (a.A[i-1]>key)
    {
        a.A[i]=a.A[i-1];
        i--;
        if(i==0)
        {
            a.A[0]=key;
        }
    }
    a.A[i]=key;
    a.length+=1;
}
void negativepostiveOnOneSide(struct Array &a)
{
    int i=0;
    int j=a.length-1;
    while (i<j)
    {
        while (a.A[i]<0)
        {
            i++;
        }
        while (a.A[j]>=0)
        {
           j--;
        }
        if(i<j)
        {
            swap(a.A[i],a.A[j]);
        }
    }
    
}
bool checkArraySorted(struct Array a)
{
    for (int i = 0; i < a.length-1; i++)
    {
        if(a.A[i]<a.A[i+1])
        {
            return true;
        }
    }
    return false;
    
}
void display(struct Array &a)
{
    for (int i = 0; i < a.length; i++)
    {
        cout<<a.A[i]<<" ";
     }
     cout<<"\n";
    
}
int main(){
Array a1={{10,11,13,14,15,16},6};
Array a2={{3,5,-1,-6,9,-10},6};
negativepostiveOnOneSide(a2);
display(a2);
insertAtSortedIndex(a1,12);
display(a1);
cout<<checkArraySorted(a1);

return 0;
}