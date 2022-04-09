#include <iostream>
using namespace std;
class BinarySearch
{
    int length;

public:
    BinarySearch(int length)
    {
        this->length = length;
    }
    int bSearch(int A[], int key)
    {
        int l = 0;
        int h = length - 1;
        int mid;
        while (l <= h)
        {
            mid = (l + h) / 2;
            if (key == A[mid])
            {
                return mid;
            }
            else if (key < A[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    int get(int A[], int index)
    {
        if (index >= 0 && index < length)
        {
            return A[index];
        }
    }
    void set(int A[], int index, int key)
    {
        if (index >= 0 && index < length)
        {
            A[index] = key;
        }
    }
    int max(int A[], int kth)
    {

        int max = A[0];
        for (int i = 1; i < length; i++)
        {
            if (A[i] > max)
            {
                max = A[i];
            }
        }
        return max;
    }
    int min(int A[])
    {
        int min = A[0];
        for (int i = 1; i < length; i++)
        {
            if (A[i] < min)
            {
                min = A[i];
            }
        }
        return min;
    }
    int sum(int A[])
    {
        int sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum += A[i];
        }
        return sum;
    }
    int average(int A[])
    {
        int sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum += A[i];
        }

        //int avg=sum/length;
        return sum / length;
    }

    void display(int a[])
    {
        for (int i = 0; i < length; i++)
        {
            cout << a[i]<<" ";
        }
    }
    int rbinarySearch(int a[],int l,int h,int key)
    {
        int mid=0;
        if(l<=h)
        {
            mid=(l+h)/2;
            if(a[mid]==key)
            {
                return mid;
            }
            else if(key<a[mid])
            {
                return rbinarySearch(a,l,mid-1,key);
            }
        
            else{
                return rbinarySearch(a,mid+1,h,key);
            }
        }
        return -1;
    }
};

int main()
{

    int arr[] = {4, 8, 10, 15, 18, 21, 24, 27, 29, 33, 37, 39, 41, 43};
    int length = sizeof(arr) / sizeof(arr[0]);
    //cout<<length;
    BinarySearch b1(length);
    //cout << b1.bSearch(arr, 21) << endl;
    //cout << b1.get(arr, 9) << endl;
    // cout<<b1.length;
    // cout << b1.max(arr,3) << endl;
    // cout<<b1.min(arr)<<endl;
    // cout<<b1.sum(arr)<<endl;
    // cout<<b1.average(arr)<<endl;
    //cout<<b1.bSearch(arr,29);
   // b1.set(arr, 7, 90);
    cout<<b1.rbinarySearch(arr,0,length-1,33)<<endl;
    b1.display(arr);
    return 0;
}