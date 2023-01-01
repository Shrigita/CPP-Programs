#include<iostream>
using namespace std;

namespace Marvellous
{
    class Demo
    {
        public:
            int i,j;
            void fun()
            {
                cout<<"Inside fun of Demo from Marvellous\n";
            }
    };
    class Hello
    {
        public:
            int x,y;
    };

}
namespace Infosystems
{
    class Demo
    {
        public:
            int a,b;
            void fun()
            {
                cout<<"Inside fun of Demo from Infosystems\n";
            }

    };
}

int main()
{
    Marvellous::Demo obj1;        // 1 way
    Infosystems::Demo obj2;
    obj1.fun();
    obj2.fun();

    using namespace Marvellous;    // 2 way
    Hello hobj;
    Demo obj3;
    obj3.fun();


    return 0;
}