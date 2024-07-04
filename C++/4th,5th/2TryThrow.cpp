#include<iostream>
using namespace std;
void test_try(int num)
{
    char * c = "String Handling"; 
      try
      {
           if(num>=0 && num<=9)
               throw num;
            else
                cout<<"\n It is not a Single Number ";
            throw c;
      }
      catch(int a)
      {
           cout<<"\n It is a Single Number "<<a;
      }
      catch(char b[100])
      {
        cout<<b;
      }
};
int main()
{
    int num;
    cout<<"\n Enter Number : ";
    cin>>num;
    test_try(num);
    return 0;
}
