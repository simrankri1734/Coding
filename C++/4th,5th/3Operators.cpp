#include<iostream>
using namespace std;

int main()
{
    float num1, num2, ans;
    char Operature;

    cout<<"\n perform Arithmetic Operation on Two Numbers";

    try
    {
        cout<<"\n Enter First Number : ";
        cin>>num1;

        cout<<"\n Enter Operature   : ";
        cin>>Operature;
        if (Operature != '+' && Operature != '-' && Operature != '*' && Operature != '/')
        throw Operature;
        cout<<"\n Enter econd Number   : ";
        cin>>num2;

       switch(Operature)
       {
            case '+':
              ans = num1 + num2;
              break;
            case '-':
            ans = num1 - num2;
               break;
            case '*':
            ans = num1* num2;
               break;
            case '/':
            if(num2 == 0)
              throw 0;
            ans = num1 / num2;
               break;

    }
    cout<<"\n Answer : "<<num1<<" "<<Operature<<" "<<num2<<" = "<<ans;
}
catch(const char c)
{
   cout<<"\n Exception Caught... \n Bad Operature : "<<c<<" is not a valid Operature";
}
catch(const int n)
{
    cout<<"\n Error : Bad Operation..";
}
return 0;
}