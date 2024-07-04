#include<iostream>
using namespace std;
class complex
{
 int num1,num2;

 public:
 void accept()
 {
    cout<<"enter two complex numbers:";
    cin>>num1>>num2;
 }
  void display() {
        cout << num1 << "+" << num2 << "i" << "\n";
    }
friend complex operator+(complex c1, complex c2) {
        complex c;
        c.num1 = c1.num1 + c2.num1;
        c.num2 = c1.num2 + c2.num2;
        return c;
    }
};

int main()
{
    complex c1,c2,sum;

    c1.accept();
     c1.accept();

     sum=c1+c2;
     cout << "\nValues:\n";
    cout << "\t";
    c1.display();
    cout << "\t";
    c2.display();
    cout << "\t";
    sum.display();

    return 0;
}
