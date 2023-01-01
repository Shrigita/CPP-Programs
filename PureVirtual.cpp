#include<iostream>
using namespace std;

class Circle
{
  public:
     float PI;
     float Radius;
     
     Circle()
     {
        PI = 3.14;
        Radius = 0.0;
     }
     Circle(float A, float B)
     {
        PI = A;
        Radius = B;
     }
     void Display()                        //Concrete method
     {
        cout<<"Value of Radius is : "<<Radius<<"\n";
     }
     virtual float Area() = 0;            //Abstract Method
     virtual float Circumferance() = 0;   //Abstact Method
};
class Marvellous : public Circle 
{
    public :
    Marvellous() : Circle()
    {

    }
    Marvellous(float A,float B) : Circle(A,B)
    {

    }
      float Area()
      {
        float Ans = PI * Radius * Radius;
        return Ans;

      }
      float Circumferance()
      {
        float Ans = 2 * PI * Radius;
        return Ans;
      }

};

int main()
{
    Marvellous mobj1;
    Marvellous mobj2(3.14 , 10.00);

    float fref = 0.0;
    fref = mobj2.Area();
    cout<<"Area is :"<<fref<<"\n";

    fref = mobj2.Circumferance();
    cout<<"circumferance is :"<<fref<<"\n";



    return 0;
}