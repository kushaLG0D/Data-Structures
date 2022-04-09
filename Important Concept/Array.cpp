#include<iostream>
using namespace std;
int main()
{
   // int arr[]={2,4,5,6,7};
   int n;
   cout<<"Enter Size Of Array"<<endl;
   cin>>n;
   int arr[n];

   for (int i = 0; i < n; i++)
   {
       cout<<"Enter the element's at array position "<< i<<endl;
       cin>>arr[i];
   }
   for(int x:arr)
   {
       
       cout<<x<<endl;
   }
   
return 0;
}