#include<iostream>
using namespace std;
//Call by value
void fun(int no)
{
   cout<<"Inside call by value : "<<no<<"\n";
   no++;
}
//call by address
void gun(int *p)
{
  cout<<"Inside call by Address : "<<*p<<"\n"; 
  (*p)++; 
}
//call by reference
void sun(int &ref)
{
 cout<<"Inside call by referance : "<<ref<<"\n";
 ref++;
}
int main()
{
    int i = 10;
    int j = 10;
    int k = 10;

    fun(i);     //fun(10);
    cout<<i<<"\n";
    gun(&j);    //gun(200);
    cout<<j<<"\n";
    sun(k);     //sun(k);
    cout<<k<<"\n";
    return 0;
}