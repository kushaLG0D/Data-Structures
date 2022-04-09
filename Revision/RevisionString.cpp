#include <iostream>
using namespace std;
int length(char S[])
{
    int i;
    for (i = 0; S[i] != '\0'; i++)
    {
    }
    return i;
}
void lowerCase(char S[])
{

    int i;
    for (i = 0; S[i] != '\0'; i++)
    {
        if (S[i] >= 65 && S[i] <= 90)
        {
            S[i] += 32;
        }
    }
    cout << S << endl;
}
void upperCase(char S[])
{

    int i;
    for (i = 0; S[i] != '\0'; i++)
    {
        if (S[i] >= 97 && S[i] <= 122)
        {
            S[i] -= 32;
        }
    }
    cout << S << endl;
}
void capitalize(char S[])
{

    int i;
    for (i = 0; S[i] != '\0'; i++)
    {
         if (i == 0)
            {
        if (S[0] >= 97 && S[0] <= 122)
        {
            
                S[0] -= 32;
                continue;
        }
            }
        else if (S[i] >= 65 && S[i] <= 90)
        {
            S[i] += 32;
        }
    }

    cout << S << endl;
}


void swapCase(char S[])
{
    int i;
    for ( i = 0; S[i]!='\0'; i++)
    {
        if(S[i]>=65 && S[i]<=90)
        {
            S[i]=S[i]+32;
            //continue;
        }
        else if(S[i]>='a' && S[i]<='z')
        {
            S[i]=S[i]-32;
            //continue;
        }
    }
    cout<<S;
}
void titleCase(char S[])
{
    int i;
    for (i = 0; S[i]!='\0';i++)
    {
        if(i==0)
        {
            if(S[0]>='a' && S[0]<='z')
            {
                S[0]=S[0]-32;
                continue;
            }
        }
        else if(S[i]==' ' && S[i+1]>='a' && S[i+1]<=122)
        {
            S[i+1]-=32;
        }
        else if(S[i]>=65 && S[i]<=90 && S[i-1]!=' ' )
        {
            S[i]=S[i]+32;
        }
    }
    cout<<S<<endl;
}
bool validate(char S[])
{
    for (int i=0;S[i]!='\0';i++)
    {
        if(!(S[i] >= 97 && S[i] <= 122) &&
            !(S[i] >= 65 && S[i] <= 90) &&
            !(S[i]>=48 && S[i]<=57))
            {
                return 0;
            }
    }
    return 1;
}
void countVowelConsonents(char S[])
{
    int vowel=0;
    int consonents=0;
    for(int i=0;S[i]!='\0';i++)
    {
        if(S[i] == 'A' || S[i]=='a' ||
        S[i] == 'E' || S[i]=='e' ||
        S[i] == 'I' || S[i]=='i' ||
        S[i] == 'O' || S[i]=='o' ||
        S[i] == 'U' || S[i]=='u' )
        {
            vowel++;
        }
        else if((S[i] >= 97 && S[i] <= 122) || (S[i] >= 65 && S[i] <= 90))
                {
                    consonents++;
                }
        }
        cout<<"Vowel:"<<vowel<<endl;
        cout<<"Consonents:"<<consonents<<endl;

}
void word(char S[])
{
    int word =1;
    for(int i=0;S[i]!='\0';i++ )
    {
        if(S[i]==' ' && S[i+1]!=' ')
        {
            word++;
        }
    }
    cout<<"Word:"<<word<<endl;
}
void reverseString(char S[])
{
    int j;
    for (j=0;S[j]!='\0';j++)
    {

    }
    j=j-1;
    int i=0;
    while(i<j)
    {
        char temp;
        temp=S[i];
        S[i]=S[j];
        S[j]=temp;
        i++;
        j--;
    }

   // cout<<S;
}
void palindrome(char S[])
{
    string temp=S;
    reverseString(S);
    if(S==temp)
    {
        cout<<"Palindrome"<<'\n';
    }
    else{
        cout<<"Not a Palindrome"<<'\n';

    }
}
void compare(char A[],char B[])
{
    int i=0;
    int j=0;
    while(A[i]!='\0' && B[j]!='\0')
    {
        if(A[i] != B[i])
        {
           // cout<<"Not Equal"<<endl;
            break;
        }
        i++;
        j++;
    }
    if(A[i]==B[j])
    {
        cout<<"Equal"<<endl;
    }
    if(A[i]<B[j])
    {
        cout<<A<<" come first in \'Dictionary\'";
    }
    else{
        cout<<B<<" come first in \'Dictionary\'";
        }
}
void duplicate(char A[])
{
    int H[26]={0};
    for (int i = 0; A[i]!='\0'; i++)
    {
        if(A[i]>=97 && A[i]<=122)
        {
            H[A[i]-97]+=1;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if(H[i]>1)
        {
            cout<<char(i+97)<<" ";
        }
    }
    
}
bool anagram(char A[],char B[])
{
    //Only for lowercase string.
    int i=0;
    int H[26]={0};
    while(A[i]!='\0' || B[i] !='\0' )
    {
          if(A[i]>=97 && A[i]<=122)
          {
        H[A[i]-97]+=1;
        H[B[i]-97]+=1;
          }
          i++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(H[i]%2==1)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{

    //char S[] = "KUShal";
    //capitalize(S);
    //swapCase(S);
    //char A[]="i lOvE jAVa tHe c++";
    //titleCase(A);
   // char username[]="kushaLG0D";
    // if(validate(username))
    // {
    //     cout<<"Login Sucessfully!!"<<endl;
    // }
    // else{
    //     cout<<"Sign-up Again!!";
    // }
    //countVowelConsonents(A);
    //word(A);
    //reverseString(A);
    // string temp=A;
    // cout<<temp;
    // char pali[]="MadaM";
    // palindrome(pali);
    // char A[]="Kushae";
    // char B[]="Kushal";
    // compare(A,B);

    // char A[]="finding";
    // duplicate(A);
    //  char A[]="decimal";
    // char B[]="medical";
    // cout<<anagram(A,B)<<endl;
    
    return 0;
}