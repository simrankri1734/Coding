#include<iostream>
using namespace std;
class NUM 
{
    private:
    int n;
    public:
    void getNum(int x)
    {
        n=x;
    }
    void dispNum(void)
    {
        cout<<"value of n is:"<<n;
    }
     void operator++(void)  //pre increment
     {
        n=++n;
     }
       void operator--(int)  //post increment
       {
        n=n--;
       }   
};
int main()
{
NUM num;
num.getNum(10);

++num;
cout<<"after increment-";
num.dispNum();
cout<<endl;

num--;
cout<<"after decrement-";
num.dispNum();
cout<<endl;
return 0;
}