#include<iostream>
using namespace std;

int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else 
    {
          return n*fact(n-1);
    }
}
int main(){

cout<<fact(0);
return 0;
}