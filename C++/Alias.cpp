#include<iostream>
using namespace std;
namespace simran_kum
{
    int x;
}
namespace sk=simran_kum;
int main()
{
    cout<<sk::x;
    return 0;
}