#include<iostream>
using namespace std;
bool validate(char *A)
{
    int i=0;
    for (int i = 0; A[i]!='\0'; i++)
    {
        if(!(A[i]>=65 && A[i]<=90) &&
        !(A[i]>='a' && A[i]<=122) &&
        !(A[i]>=48 && A[i]<=57))
        {
            return 0;
        }

    }
    return 1;
    
}

int main(){
char name[]="Kushal@";
if(validate(name))
{
    cout<<"Sign-up Sucessfull!!"<<endl;
}
else
{
    cout<<"Enter Valid Password!!"<<endl;
}
return 0;
}