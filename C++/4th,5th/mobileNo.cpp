#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    long long mobile_num, count = 0;

    cout<<"Enter mobile number"<<endl;
    cin>>mobile_num;
    try
    {
        while(mobile_num)
        {
            mobile_num = mobile_num/10;
            count++;
        }
        if(count == 10)
        throw 1;
        if(count !=10)
        throw 2;
    }
    catch(int num)
    {
        if(num == 1)
        count<<"valid mobile number"<<endl;
    if(num == 2)
        cout<<"Invalid Mobile Number"<<endl;
    }
    return 0;
}