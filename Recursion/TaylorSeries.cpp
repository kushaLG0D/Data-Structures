#include <iostream>
using namespace std;

double e(int x,int n)
{
    static double s;

    if(n==0)
    {
    return s;
    }

    else 
    {
        s=1+x*s/n;
        return e(x,n-1);
    }
    
}



// double e(int x, int n)
// {
//     static double p = 1;
//     static double f = 1;
//     double result = 0;

//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         result = e(x, n - 1);
//         p = p * x;
//         f = f * n;

//         return result + p / f;
//     }
// }

int main()
{
    cout << e(1,10 );
    return 0;
}