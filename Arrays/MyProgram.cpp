#include<iostream>
using namespace std;
int max(int arr[])
{
    int max=0;
    

    for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
       if (arr[i] > arr[max])
        {
            max=i;
        }
    }
    return arr[max];
}
int main(){
int arr[]={12,4,50,78,90,26,47,33};
int index[]={1,2,4,6,7};
static int k=0;
static int j=0;
int temp[5];

       for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++) 
       {
               if(i==index[j])
               {
                    temp[k]=arr[i];
                    k++;
                    j++;
               }
       }
    for(int item : temp)
    {
        cout<<item<< " ";
    }

   cout<<"\n"<<max(temp);

return 0;
}