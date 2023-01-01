#include<iostream>
using namespace std;
class Base
{
    public : 
       int i;
    private : 
       int j;
    protected :
       int k;
    public :
        Base()
        {
          i = 10;
          j = 20;
          k = 30;
        }
};
class Derived : public Base
{
    public :
        void fun()
        {
          cout<<"Value of public i of Base : "<<i<<"\n";
        //  cout<<"Value of private j of Base : "<<j<<"\n";
          cout<<"Value of protectd k of Base : "<<k<<"\n";
        }


};
int main()
{
    Derived dobj;
    //cout<<"value of public i :"<<bobj.i<<"\n"; //A
    //cout<<"value of private j :"<<bobj.j<<"\n"; //NA
   // cout<<"value of protected k :"<<bobj.k<<"\n"; //NA

    dobj.fun();
    return 0;
}