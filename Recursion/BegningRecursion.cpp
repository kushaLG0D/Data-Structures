#include <iostream>
using namespace std;
void display1(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        display1(n - 1);
    }
}
void display(int n)
{
    if (n > 0)
    {
        display(n - 1);
        cout << n << " ";
    }
}
int main()
{
    int x = 3;
    display(x);
    cout << endl;
    display1(x);
    return 0;
}