#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breath;

};
int main(){
    struct  rectangle r1={10,20};
    r1.length=200;
    r1.breath=400;

    cout<<"AREA OF RECTANGLE IS -"<<r1.length*r1.breath<<endl;
    

return 0;
}