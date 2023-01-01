#include<iostream>
using namespace std;

int main()
  {
    int *Arr = NULL;
    int isize = 0;
    int i = 0;
    int isum = 0;

    cout<<"Please Enter how many element you want?.\n";
    cin>>isize;

    Arr = new int(isize);
     
     cout<<"Please Enter Element\n";
     for(i = 0; i < isize ; i++)
     {
       cin>>Arr[i];
     }

     for(i = 0; i < isize; i++)
     {
        isum = isum + Arr[i];
     }
      cout<<"Addition is \n:"<< isum; 

      delete Arr;
      cout<<"free memory";

    return 0;
  }

