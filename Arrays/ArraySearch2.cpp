#include<iostream>
using namespace std;
class  Search
{
public:
    int size;
    int array[20];
    int length;

    
public:
      int BinarySearch(int key);
};

 int Search :: BinarySearch(int key)
 {
     int l=0;
     int h=length-1;
     while(l<=h)
     {
         int mid=l+h/2;

         if(key==array[mid])
         {
             return mid;
         }
        else if(key < array[mid])
         {
             h=mid-1;
         }
         else 
         {
            l=mid+1; 
         }
     }
     return -1;

 }

int main()
{
    Search S1={20,{3,7,8,11,12,14,17,19,23,24,27},11};


    for (int i = 0; i < S1.length; i++)
    {
        cout<<S1.array[i]<<" "; 
    }

    

    cout<<S1.BinarySearch(11);


    

return 0; 
} 