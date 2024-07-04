#include<iostream>
using namespace std;

class Array
{
    int a[100];
    static const int size=100;    //static why we use here

    public:
    Array()
    {
       }
       void setArray(int n,int index)
       {
        if(index >= size)
        {
            cout<<"Array index out of Bound Exeption"<<endl;
            exit(0);
        }
        a[index]=n;
       }
       void display(int index)
       {
        cout<<a[index]<<endl;
       }
       int operator[](int index)
       {
        if(index >= size)
        {
            cout<<"Arrey index out of bound Exception"<<endl;
            exit(0);
        }
        return a[index];
       }
};
   int main()
   {
    Array b;
    b.setArray(5,90);
    //b.display(90);
    cout<<b[90];
    return 0;
   }