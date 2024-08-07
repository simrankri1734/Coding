#include<iostream>
using namespace std;

class Shape
{
   public :
        virtual float area(float a, float b) = 0;   //Pure virtual function
    
    void display()
    {
        cout<<"Welcome"<<endl;
    }
};

class Rectangle :public Shape
{
    public :
    float area(float x, float y)
    {
        return(x*y);
    }
};
class Traingle : public Shape
{
       public :
           float area(float h, float b)
           {
            return 0.5*b*h;
           }
};
class Square : public Shape
{
    public :
       float area(float l, float b)
       {
        return l*b;
       }
};

Shape * choice()
{
    int c;
    cout<<"Enter your choice"<<endl;
    cout<<"1 - Rectangle"<<endl;
    cout<<"2 - Traingle"<<endl;
    cout<<"3 - Squar"<<endl;
    cin>>c;

    if(c == 1)
    return new Rectangle;
   else if(c == 2)
     return new Traingle;
    else
      return new Square;
}; 
int main()
{
   Shape *s;
   s = choice();
   cout<<"Area = "<<s->area(2,3)<<endl;

    return 0;
}
