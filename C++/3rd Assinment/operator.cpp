#include<iostream>
using namespace std;
class complex
{
    //z=a+bi
    public:
    int a,b;
    //parameterized constructor
    complex()
    {

    }
    //default constructor
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    //display function
    void display()
    {
        cout<<"a+ib="<<a<<"+"<<b<<"i"<<endl;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    complex operator-(complex c)
    {
        complex temp;
        temp.a=a-c.a;
        temp.b=b-c.b;
        return temp;
    }
     complex operator*(complex c)
    {
        complex temp;
        temp.a=a*c.a; 
        temp.b=b*c.b;
        return temp;
    }
    bool operator==(complex c)
    {
        if(a==c.a&&b==c.b)
        return true;
    else
    return false;
    }
};
int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    complex c1(a,b),c2,c3(3,5);

    c2=c1+c3;
    cout<<"c1+c3=";
    c2.display();

    c2=c1-c3;
    cout << "c1 - c3 = ";
    c2.display();

    c2=c1*c3;
    cout << "c1 * c3 = ";
    c2.display();

    cout<<"comlplex c1==c3"<<(c1==c3)<<endl;
    return 0;
}