#include<iostream>
namespace A
{
    int x;
}
namespace A
{
    int y;
}
using namespace A;
int main()
{
    std::cout<<x;
    return 0;
}