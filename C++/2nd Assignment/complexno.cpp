#include<iostream>
using namespace std;

class complex 
{
    int a;
    int b;
    public:
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    void print()
    {
       cout<<"number="<<a<<"+"<<b<<"i"<<endl;
    }
    
};
   int main()
{
    complex c(2,3);
    c.print();
    return 0;
}
