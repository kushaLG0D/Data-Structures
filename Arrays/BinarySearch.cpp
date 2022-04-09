#include <iostream>
using namespace std;

// struct Binarysearch 
// {

// int *arr;
// int length;
// int size;

// Binarysearch(int size)
// {
//     this->size=size;
//     arr=new int[size];
// }



// };

int binarySearch(int A[],int l,int h, int key)
{
    
    int mid;
    while (l <= h)
    {
        mid = l + h / 2;
        if (key == A[mid])
            return mid;
        else if (key < A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int rbinarySearch(int A[], int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = l + h / 2;
        if (key == A[mid])
        {
            return mid;
        }
        else if (key < A[mid])
        {
            return rbinarySearch(A, l, mid - 1, key);
        }
    }
        else
        {
            return rbinarySearch(A, mid + 1, h, key);
        }
    
    return -1;
}

int main()
{
    // Binarysearch b1 = new Binarysearch(13);
    // b1.arr={3,7,8,11,12,14,17,19,23,24,27};

    int arr[] = {3, 7, 8, 11, 12, 14, 17, 19, 23, 24, 27};
    int length = sizeof(arr)/sizeof(arr[0]);
    int h = length-1;
    int l = 0;
   // cout<<arr<<endl;
    cout<<l<<endl;
    cout<<h<<endl;
    cout<<length<<endl;

    cout << binarySearch(arr,l,h,17)<<endl;
    

    cout<<rbinarySearch(arr,l,h,23);

    return 0;
}