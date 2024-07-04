#include<iostream>
using namespace std;
namespace A
{
    int x;
    namespace B
    {
        int y;
    }
}
using namespace A;
using namespace B;
int main()
    {
        //sstd::cout<<A::x;
        std::cout<<B::y;
       // std::cout<<A::B::Y;
        return 0;
    }
