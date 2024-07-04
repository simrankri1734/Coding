#include<iostream>
using namespace std;

class Person
{
    protected :
         char pname[50], adddress[100];
         long long phone_no;
};
class Employee : public Person    //child class
{
   public:
   int eno;
   char ename[50];
};
class Manager : public Employee       //child class
{
    public:
        char desingnation[50], deptname[100];
        float basic_salary;
    public :
    void accept_details()
    {
        cout<<"\n enter Details of Manager";
        cout<<"\n-------------------------";
        cout<<"\n Enter Employee No. : ";
        cin>>eno;
             cout<<"\n Enter Name :";
             cin>>ename;
             cout<<"\n Enter Address :";
             cin>>adddress;
             cout<<"\n Enter phone No. :";
             cin>>phone_no;
             cout<<"\n Enter Designation :";
             cin>>desingnation;
             cout<<"\n Enter Department Name :";
              cin>>deptname;
              cout<<"\n Enter Basic Salary :";
              cin>>basic_salary;
 }

};
int main()
{
    int i,cnt,temp;
    Manager man[100];
    cout<<"\n how many manager you want to enter? : ";
    cin>>cnt;
    for(i=1;i<=cnt;i++)
    {
        man[i].accept_details();
     }
     temp=0;
     for(i=1;i<=cnt;i++)
     {
           if(man[temp].basic_salary < man[i].basic_salary)
                temp=i;
     }
     cout<<"\n Manager with Highest Salary is : "<<man[temp].basic_salary;
     cout<<"\n And, Manager Name is : "<<man[temp].ename;
     return 0;
}