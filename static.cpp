#include<iostream>
using namespace std;

//class declaration
class Demo
{   
    public:               //Access Specifier
       int i;            //instance variable
       int j;            //instance variable
     
       static int k;     // class variable
       static int l;     //class variable
 
       Demo()              //Default costructior
        {
            i = 0;
            j = 0;
            a = 0;

        }
        Demo(int a, int b)       // parameteried Constructor
        {
          i = a;
          j = b;

        }
        //void fun(const fun *this)
        void fun()                 //instance method
        {
            //static + Non Static
            cout<<"value of i : "<<this->i<<"\n";
            cout<<"value of j : "<<this->j<<"\n";
            cout<<"value of k : "<<k<<"\n";
            cout<<"value of l : "<<l<<"\n";

        }
        //void gun()
        static void gun()               //class method
        {
           // static
          cout<<"value of k : "<<k<<"\n";
          cout<<"value of l : "<<l<<"\n";
          
        }

};

int Demo::k = 0;
int Demo::l = 10;

int main()
{
    cout <<"value of k : "<<Demo::k<<"\n";    //0
    cout <<"value of l : "<<Demo::l<<"\n";   //10

    Demo::gun();

    Demo obj1(10,11);
    Demo obj2(20,21);
    Demo obj3;


    cout<<"value of i in obj1 : "<<obj1.i<<"\n";  //10
    cout<<"value of i in obj2 : "<<obj2.i<<"\n";  //20

    cout<<"value of j in obj1 : "<<obj1.j<<"\n";  //11
    cout<<"value of j in obj2 : "<<obj2.j<<"\n";  //21

    obj1.fun();  //fun(&obj1);
    obj2.fun();  //fun(&obj2);

    obj1.gun;    //Demo::gun();

    //cout<<sizeof(obj1);
    //cout<<sizeof(obj2);
    return 0;
}
//class size is Sumation of non static variable
//sizeof(Demo) = sizeof(i) + sizeof(j);
//sizeof(Demo) = 4 + 4;
//sizeof(Demo) = 8 ;