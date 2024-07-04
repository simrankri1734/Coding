#include<iostream>
using namespace std;

class V1  //parent class
{
   private:
   int a;

   public:
   int b;

  
   V1(int x, int y)  //constructure PC
   { 
     cout<<"parent constructure called"<<endl;
     a = x;
     b = y;
   }

   ~V1()
   {
     cout<<"Parent Destructure called"<<endl;
   }
   
   void display()
   {
    cout<<"a= "<<a<<", b= "<<b<<endl;
   }
};
class V2 : public V1    //child class
{

    private :
    int c;

    public :
    int d;

    V2(int x, int y) : V1(1,2) 
    {
        cout<<"child constructure called"<<endl;
        c = x;
        d = y;
    }

    ~V2()
    {
        cout<"child Destructure called"<<endl;
    }

    void print()
    {
        cout<<"b = "<<b<<" , c = "<<c<<", d = "<<d<<endl;
    }
};

int main()
{
    V2 x(3,4);
    x.print();

    V1 y(5,6);
    y.display();
    return 0;
}

