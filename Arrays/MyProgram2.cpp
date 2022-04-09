#include<iostream>
using namespace std;
int main()
{
int arr[]={2,3,5,20,2,3,5};
int l=0;
int h=sizeof(arr);
int mid=l+h/2;
int sum=0;

for (int i = 0; i < sizeof(arr); i++)
{      
          sum+=arr[i]; 
           if(i==mid)
           {
            continue;
           } 
           

}


cout<<sum;

return 0;
}