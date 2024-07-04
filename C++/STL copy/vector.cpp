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

   a.push_back(20);     //inserting element

   int n;
   cout<<"Enter 5 elements"<<endl;
   for(int i = 0; i < 5; i++)
   {
    cin>>n;
    a.push_back(n);
   }
    // a.clear();

    //for(int i=0; i< a.capacity(); i++)
    //{
    //   cout<<a[i]<<" ";
    // }

    //vector<int>::iterature x = a.begin();
    vector<int>::iterator x;

    for(x = a.begin(); x != a.end(); x++)
    {
      cout<<*x<<" ";
    }

    cout<<endl<<"Another way to print"<<endl;
    for(auto i : a)        //auto==int
    {
       cout<<i<<" ";
    }

    cout<<endl;
    cout<<"Size = "<<a.size()<<endl;
    cout<<"Capacity = "<<a.capacity()<<endl;

    return 0;
}