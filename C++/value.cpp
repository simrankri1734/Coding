#include<iostream>
namespace A
{
    int x=10;
    namespace B
    {
        int y=5;
    }
}
namespace C=A::B;
int main()
{
  std::cout<<C::y;
  return 0;
}