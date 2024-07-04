#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    multimap <int , string> m;

    m.insert({1,"simran kumari"});

    m.insert(pair<int,string>(2,"9661695725"));

    m.insert({3,"Bihar"});

    m.insert({4,"Rajasthan"});
    m.insert({4,"Bnasthali Tonk"});  

    m.erase(3);

    auto y = m.find(4);

    cout<<"value = "<<y->second<<endl;

   if(m.count(2) == 0)
   {
    cout<<"key not foun"<<endl;

   }
    else
    {
        cout<<"key found"<<endl;
    }
    multimap<int,string>::iterator x;

    for(x = m.begin(); x! = m.end();x++)
    {
         cout<<x->first<<" "<<x->second<<endl;
    }
    return 0;
}