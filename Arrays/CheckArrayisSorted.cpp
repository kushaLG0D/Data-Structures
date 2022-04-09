#include<iostream>
using namespace std;
class Array
{
   
    int A[100];

    public:
     int length;
    bool checkArraySorted(int A[],int n)
    {
        for (int i=0;i<n-1;i++)
        {
            if(A[i]>A[i+1])
            {
                return false;
            }
        }
        return true;
    }
    void insertingInSortedArray(int A[],int key)
    {
        int i=length;
       // static int index;
        while (A[i-1]>key)
        {
            A[i]=A[i-1];
            i--;
            if(i==0)
            {
                A[0]=key;
                break;
            }
        }
        A[i]=key;
        length++;
    }
   void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
    void negativeOnLeft(int A[])
    {
        int i=0;
        int j=length-1;
        while (i<j)
        {
            while (A[i]<0)//Check Negative
            {
                i++;
            }
            while (A[j]>=0)//Check Positive
            {
                j--;
            }
            if(i<j)
            {
                swap(A[i],A[j]);
            }
            
        }
        
    }
    void display(int A[])
    {
        for(int i=0;i<length;i++)
        {
            cout<<A[i]<<" ";
        }
    }
    int reverse(int x)
     {
        int number=x;
        int result=0;
        int rem;
        
        while(number!=0)
        {
            rem=number%10;
            result=result*10+rem;
            number=number/10;
        }
        return result;
    }
};
    

int main(){
   // int demoarr[]={10,20,-2,-4,40,-5};
    int arr[]={1,2,3,5,6,7};
    int demolength=sizeof(arr)/sizeof(arr[0]);
    Array a;
    a.length=demolength;
    // a.insertingInSortedArray(demoarr,60);
    // // a.insertingInSortedArray(demoarr,100);
    // // a.insertingInSortedArray(demoarr,110);
    // // a.insertingInSortedArray(demoarr,12);
    // // a.insertingInSortedArray(demoarr,11);
    //  a.insertingInSortedArray(demoarr,5);
    //  a.insertingInSortedArray(demoarr,1);
   //a.negativeOnLeft(demoarr);
    //cout<<a.checkArraySorted(arr,demolength)<<endl;
    //a.display(arr);
    cout<<a.reverse(-123);

return 0;
}