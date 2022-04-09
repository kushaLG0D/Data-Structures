#include<iostream>
using namespace std;
int getLength(char A[])
{
    int i;
    for (i = 0; A[i]!='\0'; i++)
    {
        /* code */
    }
    return i;
}
int main(){
char name[]="Kushal";
char name1[]="Kushal Nerani";
cout<<getLength(name1)<<endl;

return 0;
}