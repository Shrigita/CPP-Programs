#include<iostream>
using namespace std;

class Base1
{
    public:
      int A;
      Base1()
      {
        cout<<"Inside Base1 Constructor\n";
      }
       ~Base1()
      {
        cout<<"Inside Base1 Destructor\n";
      }
      void fun()
      {
        cout<<"Base1 fun\n";
      }

};
class Base2
{
   public:
   int I,J,K;
      Base2()
      {
        cout<<"Inside Base2 Constructor\n";
      }
       ~Base2()
      {
        cout<<"Inside Base2 Destructor\n";
      }
        void gun()
      {
        cout<<"Base2 gun\n";
      }


};
//Not allowed in java
class Derived : public Base1 , public Base2
{
    public:
    int X,Y;
      Derived()
      {
        cout<<"Inside Derived Constructor\n";
      }
       ~Derived()
      {
        cout<<"Inside Derived Destructor\n";
      }
        void sun()
      {
        cout<<"derived sun\n";
      }


};
int main()
{
    Derived * ptr = NULL;
    ptr = new Derived;

    cout<<"Size of Base1 : "<<sizeof(Base1)<<"\n";
    cout<<"Size of Base2 : "<<sizeof(Base2)<<"\n";
    cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";

    ptr->fun();
    ptr->gun();
    ptr->sun();

    delete ptr;

    return 0;
}