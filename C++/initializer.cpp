#include<iostream>
using namespace std;

class A
{
   int x,y,z;

   public:
   A()
   {}
   A(int x,int y,int z)
   {
    (*this).x=x;   //this->x=x;
    this->y=y;
    this->z=z;
   }
   void display()
   {
    cout<<"x = "<<x<<" , y= "<<y<<" ,z ="<<z<<endl;
   }
};  
int main()
{
    A a(2,3,4);  //this == a
    A b(3,2,5);  //this == b

    a.display();
    b.display();
    return 0;
}

