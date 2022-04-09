#include<iostream>
using namespace std;
class rectangle
{
    int length;int breadth;
    public:
    void intialize(int l,int b);
   int area();
   
   void changelength(int l);


};

void rectangle ::intialize(int l,int b)
{
    length=l;
    breadth=b;
}
int rectangle :: area ()
{
    return length*breadth;
}
void rectangle:: changelength(int l)
{
    length=l;
}

int main(){
    rectangle r1;
    r1.intialize(20,40);
    cout<<"Area before changing length "<<r1.area()<<endl;
    r1.changelength(30);
    cout<<"Area after changing length "<<r1.area()<<endl;
    return 0;
}











// struct rectangle
// {
//  int length;
//  int breadth;
// };
// int rarea(struct rectangle r)
// {
//      return r.length*r.breadth;
// }
// int area(struct rectangle &r)
// {
//     r.length++;
//      return r.length*r.breadth;
// }
// int main(){
//     struct rectangle r={10,20};
   
//     cout<<rarea(r)<<endl;
//     cout<<area(r);




// return 0;
// }