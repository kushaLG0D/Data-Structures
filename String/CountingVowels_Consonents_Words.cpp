#include<iostream>
using namespace std;
void vowels(char A[])
{
    int count=0; int ccount=0;
    for (int i = 0;A[i]!='\0'; i++)
    {
        if(A[i]=='A' || A[i]=='E'||A[i]=='I'||A[i]=='O' || A[i]=='U'||A[i]=='a'||A[i]=='e' || A[i]=='i'||A[i]=='o'||A[i]=='u')
        {
            count++;
        }
        else if((A[i]>=65 && A[i]<=90) || (A[i]>='a' && A[i]<=122))
        {
            ccount++;
        }
    }
    cout<<"Vowel in string are:"<<count<<endl;
    cout<<"Consonent's in string are:"<<ccount<<endl;
}
void word(char A[])
{
    int capword=0;
    for (int i = 0; A[i]!='\0'; i++)
    {
        if(i==0)
        {
            if(A[0]>=65 && A[0]<=90)
            {
                    capword++;
            }
            continue;
        }
        else if(A[i]==' '  && ((A[i+1]>=65 && A[i+1]<=90)))
        {
            capword++;
        }
    }
     // cout<<"Word in string:"<<word<<endl;
      cout<<"Capword in string:"<<capword<<endl;
}
int main(){
char demo[]={"i Love C++ Than  java"};
//vowels(demo);
word(demo);

return 0;
}