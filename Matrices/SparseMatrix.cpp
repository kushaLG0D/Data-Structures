#include<iostream>
using namespace std;
struct Element
{
    int i,j,key;
};
struct Sparse{
    int m,n,non_zero;//m=row;n=column
    struct Element *ele;
};
void create(struct Sparse *s)
{
    struct Element *ele;
    cout<<"Enter the row dimension"<<endl;
    cin>>s->m,
    cout<<"Enter the column dimension"<<endl;
    cin>>s->n;
    cout<<"How many non-zero element"<<endl;
    cin>>s->non_zero;
    s->ele=new Element; 
    cout<<"Enter the non zero element"<<endl;
    cout<<"i j key"<<endl;
    for(int i=0; i < s->non_zero ;i++)
    {
        s->ele=new Element;
        cin>>s->ele[i].i,s->ele[i].j,s->ele[i].key;
    }
}
void displays(struct Sparse s)
{
    int k=0;
    for (int i = 0; i < s.m; i++)
    {
        for (int j = 0; j<s.n; j++)
        {
           if(s.ele[k].i==s.ele[k].j)
           {
               cout<<s.ele[k].key;
               k++;
           }
        }
    }
}

int main(){
    struct Sparse s;
    create(&s);
    displays(s);
return 0;
}