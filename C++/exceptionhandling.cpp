#include<iostream>
using namespace std;

int main()
{
    float a,b,c;

    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
     
     try
     {
        if(b==0)
        throw b;

        if(b==1)
        throw"Prateek Jain";
        
        if(b==2)
        throw 'a';
        c=a/b;
     }
     catch(float e)
     {
        cout<<"Divide by zero Error b = "<<e<<endl;
     }
     catch(const char*s)
     {
        cout<<"ye exeception kisne send kiya = "<<s<<endl;
     } 
     catch(...)
     {
        cout<<"Rajnikant is here"<<endl;
     }
   
    cout<<"Result = "<<c<<endl;
    return 0;
}


