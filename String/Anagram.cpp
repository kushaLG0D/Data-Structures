#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

char A[]="kushalipp";
char B[]="lahsukipp";
//Note-String should be in lowercase
int H[26]={0};

int i=0;
while (A[i]!='\0'| B[i]!='\0')
{
    if(A[i]>=97&&A[i]<=122)
    {
        H[(A[i]-97)]+=1;
        H[(B[i]-97)]+=1;
      
    }
    i++;
    //cout<<H[(A[i]-97)]<<" ";
    //cout<<H[(B[i]-97)]<<" ";
}

for (int i=0; i<26;i++)
{
    //H[(A[i]-97)]-=1;
    if(H[i]%2==1)
    {
        cout<<"Two String Are Not Anagram"<<endl;
        break;
    }
    if(i==25)
    {
       
        cout<<'\n'<<"Two String Are Anagram"<<endl;
    }
 }
    // if(B[i]=='\0')
    // {
       
    //     cout<<'\n'<<"Two String Are Anagram"<<endl;
    // }
 
 

// int n1=A.length();
// int n2=B.length();

// if(n1!=n2)
// {
//     cout<<"Not Anagram"<<endl;
// }

// sort(A.begin(),A.end());
// sort(B.begin(),B.end());

// for (int i=0;i<n1;i++)
// {
//     if(A[i]!=B[i])
//     {
//         cout<<"Not Anagram"<<endl;
//         break;
//     }
//     if(i==n1-1)
//     {
//         cout<<"Anagram"<<endl;
//     }
// }







return 0;
}