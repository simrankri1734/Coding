#include<iostream>
using namespace std;
class Time
{
    int hour,min,sec;

    public :
    Time(int h,int m,int s)
    {
        hour=h;
        min=m;
        sec=s;
    }
    
    void print()
    {
        cout << "Time=" << hour << ":" << min << ":" << sec << endl;
    }
};
int main()
{
    Time t(3,40,35);   // Create a Time object with the specified values
    t.print();         // Call the print function of the Time object

    return 0;
}