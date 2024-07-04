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
        cout<<"Rupee PC called"<<endl;
        r=x;
    }  
      void display()
        {
            cout<<"Rupee = "<<r<<endl;
        }

       
         operator int()   //final conversion is rupee to int
        {
         cout<<"Rupee class int() called"<<endl;
          return r;
        }
};
         
       
        class Dollar
        {
            public:
            int d;
             
             Dollar()
             {
                cout<<"Dollar DC called"<<endl;
             }
            
        Dollar(int x)
        {
            cout<<"Dollar PC called"<<endl;
             d=x; 
        }
        void display()
        {
            cout<<"Dollar = "<<endl;
        }
        operator int()
        {
            cout<<"Dollar class int() called"<<endl;
            return d;
        }
        
};
  int main()
  {
    Rupee a = 5;

    a.display();
    int x=a;        //compiler will search for a.int()
    cout<<"x="<<x<<endl;

    Dollar b = 10;
    b.display();

    int y = b;
    cout<<"y = "<<y<<endl;
    return 0;
  }