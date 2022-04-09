#include <iostream>
using namespace std;

class Search
{
public:
    int array[100];
    int length;

public:
    void Swap(int &a, int &b);
    int LinearSearch(int key);
    int TLinearSearch(int key);
    void Display();
    int MTFLinearSearch(int key);
};
int Search::MTFLinearSearch(int key)
{
    for (int i = 0; i < length; i++)
    {
        if (key == array[i])
        {
            Swap(array[i], array[0]);
            return 0;
        }
    }
    return -1;
}
void Search::Display()
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int Search ::TLinearSearch(int key)
{
    for (int i = 0; i < length; i++)
    {
        if (key == array[i])
        {
            Swap(array[i], array[i - 1]);
            return i - 1;
        }
    }
    return -1;
}

void Search ::Swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int Search ::LinearSearch(int key)
{

    for (int i = 0; i < length; i++)
    {
        if (key == array[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    Search s1 = {{10, 20, 30, 40, 60, 70, 90}, 7};

    s1.Display();

    cout <<s1.TLinearSearch(40)<<endl;

    s1.Display();

    s1.MTFLinearSearch(40);

    s1.Display();

    return 0;
}
