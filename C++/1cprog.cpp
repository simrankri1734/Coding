/*#include<iostream>
int main()
{
    std::cout<<"Namaste World";
    return 0;
}

#include<iostream>
using namespace std;
int main(void)
{
    int x;
    cout<<"Namaste World\n";
    cout<<"Hii Simran";
    cin>>x;
    return 0;

}*/

#include<iostream>
namespace A
{
    int X=4;  //namespace variable
}
int X=10;     //Global variable
int main(void)
{
    int X=5;    
    //std::cout<<X;        //local variable
   // std::cout<<A::X;     //namespace variable
    std::cout<<::X;       //Global variable
    return 0;
}

