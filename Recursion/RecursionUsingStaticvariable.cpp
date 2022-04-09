#include <iostream>
using namespace std;

int fun(int y)
{
    if(y>0)
    {
        return fun(y-1)+y;
    }
    return 0;
}

// int fun(int n)
// {
//     static int x = 0;
//     if (n > 0)
//     {
//         x++;
//         return fun(n - 1) + x;
//     }
//     return 0;
// }
int main()
{
    int y = 5;
    cout << fun(y) << endl;

    return 0;
}