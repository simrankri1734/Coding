#include<iostream>
using namespace std;

class Base 
{
    protected :
        float marks1, marks2, marks3;

        public :
           void input()
           {
            cout<<"Enter marks of all the subjects"<<endl;
            cin>>marks1>>marks2>>marks3;
           }
};

class derived : public Base
 {
    protected :
       float sum;
     
    public :
       void total()
       {
          sum = marks1 + marks2 + marks3;
       }
 };
 class percentage : public derived
 {
    int percentage;

    public :
        void calculatePercentage()
        {
            percentage = (sum/300)*100.0;
        }
        void display()
        {
            cout<<"Percentage = "<<percentage<<endl;
        }
 };

 int main()
 {
    percentage p; 
    p.input();
    p.total();
    p.calculatePercentage();
    p.display();

return 0;
 }