#include<iostream>
using namespace std;
class addition
{
  int x,y;
  public:
  addition()
  {
    x=0;
    y=0;
  }
  void setx(int a)
  {
    if(a<0)
    x=-a;
  else
  x=a;
  }
  void sety(int b)
  {
    y=b;
  }
  int getx()
  {
    return x;
  }
  int gety()
  {
    return y;
  }
  int add()
  {
    return x+y;
  }
};
int main()
{
    addition a;
    a.setx(-23);
    a.sety(24);
    cout << a.add() << endl;
    return 0;
}

