#include<iostream>
using namespace std;

class A
{
   private:
   int a;

   public:
   int b;

   A(int x, int y)
   { 
    a=x;
    b=y;
   }

   void display()
   {
    cout<<"a="<<a<<", b="<<b<<endl;
   }
};


int main()
{
    A x(2,3);
    x.display();

    return 0;
}

