#include<iostream>
using namespace std;
class LargestNumber
{
    int largestNumber;
    int x,y,z;
    public:
    LargestNumber(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
     void findLargestNumber()
     
        {
            largestNumber =(x>y)?(x>z?x:z):(y>z?y:z);
        }
            void print()
            {
                cout<<"largest of"<<x<<","<<y<<","<<z<<"is"<<largestNumber<<endl;
            }
        };
        int main()
        {
            LargestNumber obj(3,5,8);
            obj.findLargestNumber();
            obj.print();
            return 0;
        }
     