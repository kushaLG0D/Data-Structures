#include<iostream>
using namespace std;
string initCap(char A[])
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
    return A;
}
void comparison(char A[],char B[])
{
    initCap(A);
    //initCap(B);
    int i;
    int j;
    for(i=0,j=0;A[i]!='\0' && B[j]!='\0';i++,j++)
    {
        if(A[i]!=B[j])
        {   
            break;
        }
    }
    cout<<i<<endl;
    cout<<j<<endl;
    if(A[i]==B[j])
    {
        cout<<A<<endl;
        cout<<B<<endl;
        cout<<"The Are Equal"<<endl;
    }
   else if(A[i]<B[i])
    {
        cout<<A<<endl;
        cout<<B<<endl;
        cout<<"A come first in \'Dictionary\'"<<endl;
        }
        else{
        cout<<A<<endl;
        cout<<B<<endl;
        cout<<"B come second in \'Dictionary\'"<<endl;
        }
}
void palindrome(char A[])
{
    int length;
    for ( length  = 0; A[length]!='\0'; length++)
    {
        /* code */
    }
    
    string temp1=A;
    int i=0;
    
    int j=length-1;
    cout<<i<<j<<endl;
    while(i<j)
    {
        if(i<j)
        {
            int temp;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
    }
            i++;
            j--;
    }
    cout<<A<<endl;
    cout<<temp1<<endl;
    if(A==temp1)
    {
        cout<<"It\'s a Palindrome";
    }
    else
    {
        cout<<"It\'s not a Palindrome";
    }

}
void display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
int main(){

// char A[]="painter";
// char B[]="Painter";
// comparison(A,B);
// char C[]="madam";

// palindrome(C);
int A[25]={2,2,34};
int n=25;
display(A,n);
//cout<<A<<endl;
return 0;
}