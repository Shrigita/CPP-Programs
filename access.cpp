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
        void fun()
       {
          cout<<"Value of public i :"<<i<<"\n"; //A
          cout<<"Value of private j :"<<j<<"\n"; //A
          cout<<"Value of protected k :"<<k<<"\n";//A
        }

};
int main()
{
    Base bobj;
    cout<<"value of public i :"<<bobj.i<<"\n"; //A
    //cout<<"value of private j :"<<bobj.j<<"\n"; //NA
   // cout<<"value of protected k :"<<bobj.k<<"\n"; //NA

    bobj.fun();
    return 0;
}