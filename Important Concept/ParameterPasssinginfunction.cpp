#include<iostream>
using namespace std;
//Pass by value- It is suitable for the add function no for swap;
//Pass by address-It is done by passing address(&) to the parameter pointer (*)in calling function;
//Pass by reference-It is done only by putting (&) before parameter identifiers in function;
void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"num1- after call swap func"<<a<<endl;
    cout<<"num2- after call swap func"<<b<<endl;

}

int add(int a,int b)
{
    int c=a+b;
    return c;
}

int main()
{
int num1=10;
int num2=20;
int num3=add(num1,num2);



cout<<num3<<endl;
swap(num1,num2);
cout<<"Num after swap 'num1'"<<num1<<endl;
cout<<"Num after swap 'num2'"<<num2<<endl;


return 0;
}