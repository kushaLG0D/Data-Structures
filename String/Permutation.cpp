#include<iostream>
using namespace std;
void perm(char S[],int k)
{
   static int A[4]={0};
    static char Res[4]={0};
    if(S[k]=='\0')
    {
        Res[k]='\0';
        cout<<Res<<endl;
    }
    else{
        for( int i = 0; S[i]!='\0'; i++)
        {
            if(A[i]==0)
            {
                Res[k]=S[i];
                A[i]=1;
                perm(S,k+1);
                A[i]=0;
            }
        }
        
    }
}
int main(){
char S[]="ABC";
cout<<"============="<<S<<"================"<<endl;

perm(S,0);  
//cout<<"======================="<<endl;

return 0;
}