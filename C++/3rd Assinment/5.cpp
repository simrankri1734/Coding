#include<iostream>
using namespace std;

class Integer
{
    int x;

    public :
      
      Integer(int a)    // int --> Integer
      {
        x = a;
      }

      operator int()   // Integer --> int
      {
        return x;
      }


};
int main()
{
    Integer x=5;

    int y = x;   //Integer --> int
    cout<<y<<endl;

    return 0;
}