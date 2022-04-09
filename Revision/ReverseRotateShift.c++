#include <iostream>
using namespace std;
struct Array
{
    int A[20];
    int size;
    int length;
};
void display(struct Array a)
{
    for (int i = 0; i < a.length; i++)
    {
        cout << a.A[i] << " ";
    }
}
void reverse(struct Array &a)
{
    int length = a.length;
    int b[length];
    for (int i = 0, j = length - 1; i < a.length - 1, j >= 0; i++, j--)
    {
        b[i] = a.A[j];
    }
    for (int i = 0; i < a.length; i++)
    {
        a.A[i] = b[i];
    }
}
void rbySwap(struct Array &a)
{
    int i=0;
    int j=a.length-1;
    while (i<j)
    {
        if(i<j)
        {
            int temp=0;
            temp=a.A[i];
            a.A[i]=a.A[j];
            a.A[j]=temp;
        }
        i++;
        j--;
    }
    
}
void lshit(struct Array &a)
{
    for (int i = 0; i<a.length-1 ; i++)
    {
        a.A[i]=a.A[i+1];
    }
    a.A[a.length-1]=0;
}
void lrotate(struct Array &a,int howmanytimetorotate)
{
    for (int i = 0; i < howmanytimetorotate; i++)
    {
        int first=a.A[0];
    for (int i = 0; i<a.length-1 ; i++)
    {
        a.A[i]=a.A[i+1];
    }
          a.A[a.length-1]=first;
    }
    
}
void rshit(struct Array &a)
{
    for (int i =a.length-1; i>0;i--)
    {
        a.A[i]=a.A[i-1];
    }
    a.A[0]=0;
}
void rrotate(struct Array &a,int howmanytimetorotate)
{
    for (int i = 0; i < howmanytimetorotate; i++)
    {
        int last=a.A[a.length-1];
    for (int i =a.length-1; i >0; i--)
    {
        a.A[i]=a.A[i-1];
    }
        a.A[0]=last;
    }
    
}

int main()
{
    struct Array a1 = {{1,2, 3, 4, 5, 6}, 20, 6};
    //reverse(a1);
   // rbySwap(a1);
   //lshit(a1);
  // lrotate(a1,3);
  //rshit(a1);
   // rrotate(a1,2);
   rbySwap(a1);

    display(a1);
    return 0;
}