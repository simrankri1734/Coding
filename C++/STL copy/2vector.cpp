#include<iostream>
#include<vector>

using namespace std;


int main()
{
    vector <int> a;       //array <int,10> a;
       
    cout<<"Size = "<<a.size()<<endl;
    cout<<"Capacity = "<<a.capacity()<<endl;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

   //v.begin()    return iterature of the first element
   // v.end()     return iterature of the last + 1 element

   a.insert(a.begin(),5);
   a.insert(a.begin(),10);

   a.push_back(20);     //for inserting element

   int n;
   cout<<"Enter 5 elements"<<endl;
   for(int i = 0; i < 5; i++)
   {
    cin>>n;
    a.push_back(n);
   }

    //vector<int>::iterator x;

    for(auto y = a.begin(); y != a.end(); y++)     //works like iterator
    {
      cout<<*y<<" ";
    }

    cout<<endl<<"Another way to print"<<endl;
    for(auto i : a)            //enhanced for loop Method
    {
       cout<<i<<" ";
    }

    cout<<endl;
    cout<<"Size = "<<a.size()<<endl;
    cout<<"Capacity = "<<a.capacity()<<endl;

    return 0;
}