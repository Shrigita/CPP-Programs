#include<iostream>
using namespace std;

class Demo
{
    public :
        int i;
        int j;
        const int k;
        const int l;
        Demo() : k(11) , l(21)
        {
            i = 51;
            j = 101;
        }
        Demo(int a,int b,int c,int d) : k(c) ,l(d)
        {
            i = a;
            j = b;
        }


};

int main()
{
    Demo obj1;
    cout<<"Default Constructor Value : \n ";
    cout<<"Value of i : "<<obj1.i<<"\n";
    cout<<"Value of j : "<<obj1.j<<"\n";
    cout<<"Value of k : "<<obj1.k<<"\n";
    cout<<"Value of l : "<<obj1.l<<"\n";

    Demo obj2(10,20,30,40);
    cout<<"Parameterised Constructor Value : \n";
    cout<<"Value of i : "<<obj2.i<<"\n";
    cout<<"Value of j : "<<obj2.j<<"\n";
    cout<<"Value of k : "<<obj2.k<<"\n";
    cout<<"Value of l : "<<obj2.l<<"\n";
    return 0;
}