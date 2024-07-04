#include<iostream>
#include<set>

using namespace std;

int main()
{
    set <int, greater<int>> s = {2,3,5,6}; 

    
    s.insert(5);
    s.insert(3);
    s.insert(10);
    s.insert(4);
    s.insert(1);

    s.erase(1);

    cout<<"Size= "<<s.size()<<endl;

   // set <int>, greater<int>>::iterator y;
   auto y = s.find(10);

    if(y!= s.end())
    {
        cout<<"10 found"<<endl;
    }
    elase
    {
        cout<<"10 not found"<<endl;
    }

    set<int> :: iterator x;
 
    for(x = s.begin(); x ! = s.end(); x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    return 0;
} 