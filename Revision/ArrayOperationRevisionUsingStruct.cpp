#include<iostream>
using namespace std;
struct Array
{
    int A[20];
    int size;
    int length;
};
int linearSearch(struct Array a,int key)
{
    for(int i=0;i<a.length;i++)
    {
        if(a.A[i]==key)
        {
            return i;
        }
    }
    return -1;
}
void swap(int &a,int &b)
{   
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int tlinearSearch(struct Array *a,int key)
{
    for (int i = 0; i < a->length; i++)
    {
        if(a->A[i]==key)
        {
            swap(a->A[i-1],a->A[i]);
            return i-1;
        }
    }
    return -1;
    
}
int mthlinearSearch(struct Array *a,int key)
{
    for (int i = 0; i < a->length; i++)
    {
        if (a->A[i]==key)
        {
            swap(a->A[0],a->A[i]);
            return 0;
        }
     }
    return -1;
}
int binarySearch(struct Array *a,int key)
{
    int l=0;
    int h=a->length-1;
    int mid;
    while (l<=h)
    {
        mid=(l+h)/2;
        if(key==a->A[mid])
        {
            return mid;
        }
        else if(key < a->A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
    
}
int rbinarySearch(struct Array *a,int l,int h,int key)
{
    
    int mid;
     if(l<=h)
    {
        mid=(l+h)/2;
        if(a->A[mid] == key)
        {
            return mid;
        }
        else if(key < a->A[mid])
        {
            return rbinarySearch(a,l,mid-1,key);
        }
        else
        {
            return rbinarySearch(a,mid+1,h,key);
        }
    }
    return -1;
}
int get(struct Array *a,int index)
{
    if(index>0 && index<a->length)
    {
        return a->A[index];
    }
    return -1;
}
void set(struct Array *a,int index,int key)
{
    if(index>0 && index<a->length)
    {
        a->A[index]=key;
    }
}
void display(struct Array *a)
{
    for (int i = 0; i < a->length; i++)
    {
        cout<<a->A[i]<<" ";
    }
    
}
int max(struct Array a)
{
    int max=a.A[0];
    int i=0;
    for (int i=0;i<a.length;i++)
      {
        if(a.A[i]>max)
        {
            max=a.A[i];
        }
    }
    
    return max;
}
int min(struct Array a)
{
   int min=a.A[0];
    int i=0;
    for (int i=0;i<a.length;i++)
      {
        if(a.A[i]<min)
        {
           min=a.A[i];
        }
    }
    
    return min;
}
int sum(struct Array a)
{
    int sum=0;
    for (int i = 0; i < a.length; i++)
    {
        sum+=a.A[i];
    }
    return sum;
}
int avg(struct Array a)
{
    
    int sum=0;
    for (int i = 0; i < a.length; i++)
    {
        sum+=a.A[i];
    }
    return sum/a.length;
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

int main(){
Array a1={{4,11,22,30,45,56,78,90},20,8};
//cout<<mthlinearSearch(&a1,100)<<endl;
//cout<<linearSearch(a1,100)<<endl;;
//cout<<tlinearSearch(&a1,99)<<endl;
//cout<<binarySearch(&a1,90)<<endl;
//int h=a1.length-1;
//cout<<h<<endl;
//int l=0;
//int h=a1.length-1;
//cout<<rbinarySearch(&a1,l,h,56)<<endl;
//cout<<get(&a1,7)<<endl;
//set(&a1,2,100);
//cout<<max(a1)<<endl;
//cout<<min(a1)<<endl;
//cout<<sum(a1)<<endl;
//cout<<avg(a1)<<endl;
//display(&a1);


return 0;
}