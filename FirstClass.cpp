#include<iostream>
using namespace std;

class Maths
{
    public:           //Access Specifier
      int iNo1;       //Characterstics
      int iNo2;       // Characterstics

      Maths()                 //Construction(Default)
      {
        iNo1 = 0;
        iNo2 = 0;
      }
      Maths(int A, int B)      //Construction(Parameterised)
      {
         iNo1 = A;
         iNo2 = B;

      }
      int Addition()         //Behaviour
      {
        return iNo1 + iNo2;
      }
      int Substraction()         //Behavour
      {
        return iNo1 - iNo2;
      }

};
int main()
{
    Maths mobj1;
    Maths mobj2(11,10);
    return 0;
}