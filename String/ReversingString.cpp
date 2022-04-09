#include <iostream>
using namespace std;
void reverseSwap(char A[])
{
    char temp;
    int i = 0;
    while (A[i] != '\0')
    {
        i++;
    }
    i = i - 1;
    //cout<<i<<endl;
    for (int j = 0; j < i; i--, j++)
    {
        if (j < i)
        {
            temp = A[j];
            A[j] = A[i];
            A[i] = temp;
        }
    }
    cout << A << endl;
}
void reverse(char A[])
{

    int j;
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
    }
    char B[i];
    i = i - 1;

    for (j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    B[j] = '\0';
    cout << B << endl;
}
int main()
{

    char name[] = "Kushal";
    reverseSwap(name);

    return 0;
}