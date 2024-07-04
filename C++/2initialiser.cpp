#include<iostream>
using namespace std;

class A
{
   int x,y,z;

   public:
   A()
   {}
   
   A(int a,int b,int c):x(a),y(c),z(b)   //initialiser list
   {
     cout<<"parameterized constructura called"<<endl;
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
