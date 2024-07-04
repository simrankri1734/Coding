#include<iostream>
using namespace std;

class Shape
{
   public :
        virtual float area(float a, float b) = 0;   //Pure virtual function
    
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
class Object : public Rectangle , public Traingle
{
    public :
         void area(int x,int y )
         {
           cout<<"Rectangle Area = "<<Rectangle::area(x,y)<<endl;
            cout<<"Traingle Area = "<<Traingle::area(x,y)<<endl;
         }
};

int main()
{
  
     Object o;
     o.area(5,6);
    return 0;
}
