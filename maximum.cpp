#include<iostream>
using namespace std;

int main()
{
    int Num1 , Num2;
    cout<<"Enter First Number : \n";
    cin>>Num1;
    cout<<"Enter Second Number : \n";
    cin>>Num2;
    if(Num1 > Num2)
    {
        cout<<"Maximum Number ="<< Num1;
    }
    else if(Num1 < Num2)
    {
        cout<<"Maximum Number ="<< Num2;
    }
    else
    {
        cout<<"Both are Equal...";
    }
    return 0;

 }