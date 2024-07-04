#include<iostream>
using namespace std;

class A
{
    private :
    int x;

    protected :
    int y ;

   public :
    int z;

    A()
    {
        x = 1,y = 2,z = 3;
    }

    void display()
    {
        cout<<x<<" ";
        cout<<y<<" ";
        cout<<z<<endl;

    }
};

  class B : public A
{
    public :
     void display()
    {
       // cout<<x<<" ";  private not accessible
        cout<<y<<" ";   //protected = private
        cout<<z<<endl;

    }

};

class C : protected A
{
   public :
   void display()
   {
       // cout<<x<<" ";  private not accessible
        cout<<y<<" ";   //protected = private
        cout<<z<<endl;   //work as public in this class as a behaviour(accessible as a protected)

    }
};
   class D : private A
    {
        public :
          void display()
          {
            //cout <<x<<" ";    private not accessible
             cout<<y<<" ";
             cout<<z<<endl;
          }
    };

    class E : public D
    {
      public :
          void display()
          {
            //cout <<x<<" ";    private not accessible
             //cout<<y<<" ";    private not accessible
             //cout<<z<<endl;   private not accessible
          }
    };

 int main()
  {
    A a;
    a.display();

    //a.x = 5;   for outside world private not accessible
   // a.y = 10;  protected = private
    a.z = 20;

   B b;
   //b.x = 5;    for outside world private not accessible
  // b.y = 10;     protected = private
   b.z = 20;

   C c;
   //c.x = 5; 
   //c.y = 10;  protected = private
   //c.z = 20;  naw it is also protected (inheritance throgh class C)

   D d;
   //d.x = 5;  private
   //d.y = 10;  private
   //d.z = 20;  private
    return 0;
 }