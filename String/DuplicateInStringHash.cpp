#include<iostream>
using namespace std;

void lowerCase(char A[])
{
    int i;
    for ( i = 0;A[i]!='\0'; i++)
    {
        if(A[i]>=65 && A[i]<=90)
        {
        A[i]=A[i]+32;
        }
    }
    cout<<A<<"\n";
}
int main(){

//Using Hashtable
// char A[]="FindFing";
// lowerCase(A);
// int H[26]={0};
// for (int i=0;A[i]!='\0';i++)
// {
//     H[(A[i]-97)]+=1;
// }

// for (int i = 0; i<26; i++)
// {
//     if(H[i]>1)
//     {
//         cout<<char(i+97)<<" ";
//     }
// }

//Using Bits

long int H=0;
long int X=0;

char A[]="finding";

for (int i=0; A[i] !='\0';i++)
{
    X=1;
    X=X<<A[i]-97;
    cout<<X<<" ";
    if(X&H > 0)
    {
        cout<<char(A[i])<<" ";
    }
    else
    {
        H=X|H;
    }
    
    
}







return 0;
}