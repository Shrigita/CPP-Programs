#include<iostream>
using namespace std;

class Base
{
   public:
      int A,B;

   Base()
   {
    cout<<"Inside Base Constructor\n";
   }
   ~Base()
   {
      cout<<"Inside Base destructor\n";
   }
   void fun()
   {
    cout<<"Inside Base fun\n";
   }

};
class Derived : public Base
{
  public:
    int X,Y;

    Derived()
    {
        cout<<"inside derived Constructor\n";
    }
     ~Derived()
    {
        cout<<"inside derived destructor\n";
    }
    void gun()
    {
        cout<<"Inside gun of Derived\n";
    }

};
class DerivedX : public Derived
{
   public:
    int i,j;
    DerivedX()
    {
        cout<<"Inside Derivedx Constructir\n";
    }
    ~DerivedX()
    {
        cout<<"Inside Derivedx Destructor\n";
    }
    void sun()
    {
        cout<<"Inside sun of DerivedX\n";
    }

};

int main()
{
    cout<<"size of Base : "<<sizeof(Base)<<"\n";
    cout<<"size of Derived : "<<sizeof(Derived)<<"\n";
    cout<<"size of Derivedx : "<<sizeof(DerivedX)<<"\n";

    DerivedX *ptr = NULL;
    ptr = new DerivedX;
   
    ptr->fun();
    ptr->gun();
    ptr->sun();

    //DerivedX dobj;  //static memory allocation
    //dobj.fun();
    //dobj.gun();
    //dobj.sun();

    delete ptr;

    return 0;
}