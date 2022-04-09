#include <iostream>
using namespace std;
class Array
{
    int arr[100];

   

public:
 int length;
    void create();
    void display();
    void swap(int &a,int &b);
    void add(int key);
    void insert(int index, int key);
    void remove(int key);
    void removeAt(int index);
    int linearSearch(int key);
    int tlinearSearch(int key);
    int mthlinearSearch(int key);
    int binarySearch(int key);
    int rbinarySearch(int A[],int l,int h,int key);
    void reverse(int A[]);
    void printArray(int A[]);
    void reversSwapMeth(int A[]);
    int get(int A[],int index);
    void set(int A[],int index,int key);
    
};
void Array::create()
{
    int length;
    cout << "Enter the length:"
         << "\n";
    cin >> length;
    this->length = length;
    for (int i = 0; i < length; i++)
    {
        cout << "Enter the element " << i << ":" << endl;
        cin >> this->arr[i];
    }
}
void Array::display()
{

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}
void Array::add(int key)
{
    arr[length] = key;
    length++;
}
void Array::remove(int key)
{
    static int index;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == key)
        {
            arr[i] = 0;
            index = i;
        }
    }
    for (int i = index; i < length; i++)
    {
        arr[i] = arr[i + 1];
    }
    length--;
}
void Array::insert(int index, int key)
{
  for (int i = length; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = key;
    length++;
}
void Array::removeAt(int index)
{
     int elemnt=arr[index];
    for(int i=index;i<length;i++)
    {
       
        arr[i]=arr[i+1];
    }
    length--;
}
int Array::linearSearch(int key)
{
    for(int i=0;i<length;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
void Array::swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int Array::tlinearSearch(int key)
{
    for(int i=0;i<length;i++)
    {
        if(arr[i]==key)
        {
           swap(arr[i],arr[i-1]); 
           return i-1;
        }
    }
    return -1;

}
int Array::mthlinearSearch(int key)
{
    for(int i=0;i<length;i++)
    {
        if(arr[i]==key)
        {
            swap(arr[0],arr[i]);
            return 0;
        }
    }
    return -1;
}
int Array::binarySearch(int key)
{
    int l=0;
    int h=length-1;
    int mid;
    while (l<=h)
    {
        mid=(l+h)/2;
        if(key==arr[mid])
        {
            return mid;
        }
        else if (key<arr[mid])
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
int Array::rbinarySearch(int A[],int l,int h,int key)
{
    int mid;
        if(l<=h)
        {
           mid=(l+h)/2;

           if(A[mid]==key)
           {
               return mid;
           }
        
           else if(key<A[mid] )
           {
               return rbinarySearch(A,l,mid-1,key);
           }
        
           else
           {
               return rbinarySearch(A,mid+1,h,key);
           }
           
        }
        return -1;
}

void Array::reverse(int A[])
{
   // int length=sizeof(A)/sizeof(A[0]);
    int B[length];
    for(int i=length-1,j=0;i>=0;i--,j++)
    {
        B[j]=A[i];
    }
    for(int i=0;i<length;i++)
    {
        A[i]=B[i];
    }
}
void Array::printArray(int A[])
{
     
    for(int i=0;i<length;i++)
    {
        cout<<A[i]<<" ";
    }
}
void Array::reversSwapMeth(int A[])
{
    for(int i=0,j=length-1;i<=j;i++,j--)
    {
        swap(A[i],A[j]);
    }
}

int main()
{
    int demoarr[]={2,3,4,5,6};
    int dlength=sizeof(demoarr)/sizeof(demoarr[0]);
    //cout<<length;
    int h=dlength-1;
    int l=0;
    Array a1; 
    a1.length=dlength;
    // a1.printArray(demoarr);
    // a1.reversSwapMeth(demoarr);
    // //a1.reverse(demoarr);
    // cout<<endl;
    // a1.printArray(demoarr);
  //  a1.create();
    // a1.insert(3, 30);
    // a1.removeAt(4);
    //a1.remove(30);Remove By value;
    //cout<<a1.linearSearch(20)<<endl;
  // cout<<a1.tlinearSearch(34)<<endl;
  //cout<<a1.mthlinearSearch(29)<<endl;
 //cout<<a1.binarySearch(26)<<endl;
   // a1.display();
   //cout<<a1.rbinarySearch(demoarr,l,h,6);
  // cout<<a1.get(demoarr,4);
    return 0;
}