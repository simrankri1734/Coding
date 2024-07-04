#include<iostream>
using namespace std;

class A
{
  public:
     static int count;
     int y;
     A()
     {
        count++;
        y=0;
        cout<<"cout"<<count<<endl;
     }
};
int A::count=0;

int main()
{
    A a,b,c;

    cout<<"count="<<a.count<<",y "<<a.y<<endl;
        cout<<"count="<<b.count<<",y "<<a.y<<endl;
            cout<<"count="<<c.count<<",y "<<a.y<<endl;
            return 0;
}
