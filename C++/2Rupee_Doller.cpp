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

        Rupee(int x)
     {
       r=x;
    }  
      void display()
        {
            cout<<"Rupee = "<<r<<endl;
        }
};
  int main()
  {
    Rupee a = 5;

    a.display();
    return 0;
  }