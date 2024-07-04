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
        operator float()
        {
          float x;
          return x;
        }
         operator int()   //final conversion is rupee to int
        {
          int x;
          return x;
        }
         operator char()
        {
          char x;
          return x;
        }
        
};
  int main()
  {
    Rupee a = 5;

    a.display();
    int x=a;        //compiler will search for a.int()
    cout<<"x="<<x<<endl;
    return 0;
  }