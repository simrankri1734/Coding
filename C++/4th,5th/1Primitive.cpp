#include<iostream>
using namespace std;
 
 class Complex
 {
    int real;
    int img;

    public :
    void display()
    {
        cout<<"Real = "<<real<<" Img = "<<img<<endl;
    }
    Complex(int x)
    {
        real = x;
        img = x;
    }
 };

 int main()
 {
    Complex c = 5;
    c.display();
    return 0;
 }