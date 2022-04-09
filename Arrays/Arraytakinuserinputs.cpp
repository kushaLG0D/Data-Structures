#include <iostream>
using namespace std;

class Array
{
    
    int length;
    int array[100];

public:
    
    void Create()
    {
        cout << "Enter Length of array" << endl;
        cin >> length;
        length=this->length;
        for (int i = 0; i < length; i++)
        {
            cout << "Enter Elements in Array" << i << endl;
            cin >> array[i];
        }
    }

    void Display()
    {
        cout<<"Your Elements In Array Are"<<endl;
        for (int i = 0; i < length; i++)
        {   
            cout << array[i] << " ";
        }
    }

    void Add(int x)
    {
        array[length]=x;
        length++;
    }
    void Insert(int index,int x)
    {
        length++;
        for(int i=length-1;i>index;i--)
        {
            array[i]=array[i-1];

        }
        array[index]=x;
        
    }
    void Removeat(int index)
    {
        int a=array[index];
        for (int i = index; i < length-1; i++)
        {
            array[i]=array[i+1];
        }
        length--;
    }
    int LinearSearch(int key)
    {
        for (int i = 0; i < length-1 ; i++)
        {
            if(key==array[i])
            {
                
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    // Array A1;
    
    // A1.Create();
    
    // // A1.Add(20);
    //  A1.Insert(4,40); 
    // //A1.Removeat(2);
    
    // A1.Display();

   //cout<<"\n"<<A1.LinearSearch(30);

   for (int i = 0; i < 10; i++)
   {
      for (int j = 0; j < 10; j++)
     
      {
       if(i==4 && j==4)
       {
           continue;
       }
        cout<<i<<" ";

     }
   }
    

    

        return 0;
}