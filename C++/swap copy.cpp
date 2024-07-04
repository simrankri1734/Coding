#include<iostream>
#include<stack>
using namespace std;

class Swapping
{

    public :
    template<class T>
     void swap(T a, T b)
     {
        T temp = a;
            a = b;
            b = temp;

            cout<<"a = "<<a<<", b = "<<b<<endl;
     }
};

int main()
{
    Swapping s;

    s.swap<int>(5,6);
    s.swap<char>('p','j');

    Stack <int> s;
    s.push(6);
    s.pop();

    Stack<Employee> s1;
    s.push(e1);
    return 0;
}
