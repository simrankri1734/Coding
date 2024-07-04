#include<iostream>
using namespace std;

class Rupee
{

    public:
    int r;
        Rupee()
        {
            cout<<"DC called"<<endl; 
        }
        void display()
        {
            cout<<"Rupee = "<<r<<endl;
        }
};
  int main()
  {
    Rupee a ;
    a.r = 5;

    a.display();
    return 0;
  }
