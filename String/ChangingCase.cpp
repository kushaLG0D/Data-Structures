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
void upperCase(char A[])
{
    int i;
    for ( i = 0; A[i]!='\0'; i++)
    {
        if(A[i]>='a' && A[i]<=122)
        {
        A[i]-=32;
        }
        
    }
    cout<<A<<"\n";
}
void initCap(char A[])
{
    int i=0;
    for ( i = 0;A[i]!='\0';i++)
    {
    if(i==0)  
      {
         if(A[0]>='a' && A[0]<=122)
         {
        A[0]=A[0]-32;
        continue;
         }
     }
     else if(A[i]>=65 && A[i]<=90)
     {
         A[i]=A[i]+32;
     }

    }
    cout<<A<<"\n";
}
void toggleCase(char A[])
{
    int i=0;
    for ( i = 0; A[i]!='\0'; i++)
    {
        if(A[i]>=65 && A[i]<=90)
        {
            A[i]=A[i]+32;
        }
        else if(A[i]>='a' && A[i]<='z')
        {
            A[i]=A[i]-32;
        }
    }
    cout<<A;
    
}
void title(char A[])
{
    int i=0;
    for ( i=0;A[i]!='\0';i++ )
    {
        if(i==0)
        {
            if(A[i]>='a' && A[i]<='z')
            {
                A[0]=A[0]-32;
            }
        }
        else if(A[i]==' ' && (A[i+1]>='a' && A[i+1] <='z'))
        {
            A[i+1]=A[i+1]-32;
        }
    }
    cout<<A;
}

void display(char A[])
{
    for(int i=0;A[i]!='\0';i++)
    {
        cout<<A[i];
    }
}
int main(){
 char name[]="KusHAL";
//lowerCase(name);
char name2[]="naYAN";
// upperCase(name2);
// initCap(name2);
// char greet[]="welCOME";
// display(name2);
toggleCase(name2);
char demo[]={"I Love C++ ThAn  Java"};
//initCap(demo);
// initCap(name);
// initCap(name2);
title(demo);

return 0;
}