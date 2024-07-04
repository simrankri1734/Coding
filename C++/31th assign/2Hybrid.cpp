#include<iostream>
using namespace std;

class Base
{
    protected :
    int x,y;

    public :
    void input()
    {
        cout<<"Enter two numbers"<<endl;
        cin>>x>>y;
    }
};

 class derived : public Base
 {
     int sum;

     public :
         void add()
         {
            sum = x+y;
         }
         void display()
         {
            cout<<"Sum = "<<sum<<endl;
         }
 };
 int main()
 {
    derived d;
    d.input();
    d.add();
    d.display();

    return 0;
 }