#include<iostream>
using namespace std;

int main(){
 
  int A[3][4]= {{10,20,30,40},{50,60,70,80},{90,100,110,120}};

  int *B[3];
  B[0]=new int[4];
  B[1]=new int[4];
  B[2]=new int[4];


  int **C;
  C=new int*[3];
  C[0]=new int [4];
  C[1]=new int [4];
  C[2]=new int [4];


  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
        cout<<A[i][j]<<" ";
    }
       cout<<endl;
  }
  



return 0;
}  