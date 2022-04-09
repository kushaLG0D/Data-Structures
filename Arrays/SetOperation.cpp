#include<iostream>
using namespace std;
class SetOperation
{
    int temp[30];
    int length;
    public:
 void unionOperation(int A[],int B[],int n,int m)
    {
        
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
             else if(A[i]>B[j])
             {
                 temp[k]=B[j];
                 j++;
             }
             else
             {
                 temp[k]=A[i];
                 i++;
                 j++;
                 
             }
             k++;
        }
        while (i<n)
        {
            temp[k]=A[i];
            i++;
            k++;
        }
        while (j<m)
        {
            temp[k]=B[j];
            j++;
            k++;
        }
        this->length=k;
 }
 void unionOperationOfUnsortedArray(int A[],int B[],int n,int m)
 {
     int i=0;
     int k=0;

     for(i=0;i<n;i++)
     {
         temp[k]=A[i];
         k++;
     }
     int flag=0;
     for (int j=0;j<m;j++)
     {
         for (int l=n-1; l>=0; l--)
         {
             if(B[j]==A[l])
             {
                 break;
             }
             if(l==0)
             {
               temp[k]=B[j];
               k++;  
             }
      }
    }
     this->length=k;
     
}
void intersectionOfUnsortedArray(int A[],int B[],int n,int m)
{
    int k=0;
    for (int i = 0; i < n; i++)
    {
        for ( int j = 0; j < m; j++)
        {
            if(A[i]==B[j])
            {
                temp[k]=A[i];
                k++;
            }
        }
        
    }
    this->length=k;
}
void intersection(int A[],int B[],int n,int m)
{
    int i=0;
    int j=0;
    int k=0;
    while (i<n && j<m)
    {
      if(A[i]<B[j])
      {
          i++;
      }
      else if (A[i]>B[j])
      {
          j++;
      }
      else{
          temp[k]=A[i];
          i++;
          j++;
          k++;
      }
      
    }
    this->length=k;
    
}
void differenceUnSortedArray(int A[],int B[],int n,int m)
{
    int k=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = m-1 ; j>=0; j--)
        {
            if(A[i]==B[j])
            {
                break;
                }
                if(j==0)
                {
                   temp[k]=A[i];
                   k++;
                }
        }
        }
        this->length=k;
    
}
void difference(int A[],int B[],int n,int m)
{
    int i=0;
    int j=0;
    int k=0;
    while (i<n && j<m)
    {
         if(A[i]<B[j])
         {
             temp[k]=A[i];
             i++;
             k++;
         }
         else if(A[i]>B[j])
         {
             j++;
             }
             else
             {
                 i++;
                 j++; 
             }
    }
    this->length=k;
    
}
 void display()
      {
        for (int i = 0; i < length; i++)
        {
            cout<<temp[i]<<" ";
        }
        cout<<"\n";
  }

};

int main(){
int A[]={3,4,5,6,10,86};
int B[]={2,4,5,7,12,86};
int C[]={11,2,29,40,68};
int D[]={5,11,9,68,89};
//int n=sizeof(A)/sizeof(A[0]);
//int m=sizeof(B)/sizeof(B[0]);
//cout<<n<<endl;
//cout<<m<<endl;

SetOperation so;
//so.unionOperation(A,B,n,m);
//so.unionOperation(A,B,5,6);
//so.intersection(A,B,6,7);
//so.unionOperationOfUnsortedArray(C,D,5,5);
so.intersectionOfUnsortedArray(C,D,5,5);
so.display();
so.intersection(A,B,6,6);
so.display();
so.differenceUnSortedArray(D,C,5,5);
so.display();
so.difference(B,A,6,6);
so.display();
// int A[]={11,2,3,5,49,2,3,4,5,14};
// int leftsum=0;
// int rightsum=0;
// int l=0;
// int length=sizeof(A)/sizeof(A[0]);
// int h=length-1;
// int mid=(l+h)/2;

// for (int i=0;i<length;i++)
// {
//     if(i==mid)
//     {
//     continue;
//     }
//     leftsum=leftsum+A[i];
// }

// cout<<leftsum<<endl;

return 0;

}
