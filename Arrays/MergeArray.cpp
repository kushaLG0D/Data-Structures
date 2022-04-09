#include<iostream>
using namespace std;
class MergeArray
{
    //int array[10];
    int length;
    int temp[30];
    public:
    void mergeArray(int A[],int B[],int n,int m)
    {
        this->length=m+n;
        int i=0;
        int j=0;
        int k=0;
        while (i<n && j<m)
        {
            if(A[i]<B[j])
            {
                temp[k]=A[i];
                i++;
             }
             else
             {
                 temp[k]=B[j];
                 j++;
             }
             k++;
     }
        while (i<n)
        {
            temp[k]=A[i];
            i++;k++;
        }
        while (j<m)
        {
            temp[k]=B[j];
            j++;
            k++;
        }
    }
    void display()
      {
        for (int i = 0; i < length; i++)
        {
            cout<<temp[i]<<" ";
        }
  }
  
};



int main(){
int A[]={3,8,16,20,25};
int B[]={4,10,12,22,23,29};
MergeArray m;
m.mergeArray(A,B,5,6);
m.display();

return 0;
}