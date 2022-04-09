#include <iostream>
using namespace std;

struct Array
{
    int arr[20];
    int size;
    int length;
};
void display(struct Array a)
{
    for (int i = 0; i < a.length; i++)
    {
        cout << a.arr[i] << endl;
    }
}
int get(struct Array a, int index)
{
    if (index >= 0 && index < a.length)
    {
        return a.arr[index];
    }
    return -1;
}
void set(struct Array &a, int index, int key)
{
    if (index >= 0 && index < a.length)
    {
        a.arr[index] = key;
    }
}
int max(struct Array a)
{
    int max = a.arr[0];

    for (int i = 1; i < a.length; i++)
    {
        if (a.arr[i] > max)
        {
            max = a.arr[i];
        }
    }
    return max;
}
int min(struct Array a)
{
    int min = a.arr[0];

    for (int i = 1; i < a.length; i++)
    {
        if (a.arr[i] < min)
        {
            min = a.arr[i];
        }
    }
    return min;
}
int sum(struct Array a)
{
    int sum = 0;
    for (int i = 0; i < a.length; i++)
    {
        sum += a.arr[i];
    }
    return sum;
}
int avg(struct Array a)
{
    int sum = 0;
    for (int i = 0; i < a.length; i++)
    {
        sum += a.arr[i];
    }
    return sum / a.length;
}
int binarySearch(int key, struct Array a)
{
    int l = 0;
    int h = a.length - 1;
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a.arr[mid])
        {
            return mid;
    
        }
        else if (key < a.arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    struct Array a1 = {{2, 3, 4, 5, 6}, 20, 5};
    //cout<<get(a1,7);
    // set(a1,1,10);
    //cout<<max(a1)<<endl;
    //cout<<min(a1)<<endl;
    //cout<< sum(a1)<<endl;
    //cout<<avg(a1);
    //cout<<binarySearch(2,a1)<<endl;
    display(a1);

    return 0;
}