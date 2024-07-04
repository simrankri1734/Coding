#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    map <int , string> m;

    // First Method to insert data in map
    m[1] =  "simran kumari";

    // second Method to insert data in map
    m.insert(pair<int,string>(2,"9661695725"));

    //third method to insert data in map
    //m.insert({3,"Bihar"});

    m[4] = "Rajasthan";
    m[4] = "Bnasthali Tonk";  

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
    map<int,string>::iterator x;

    for(x = m.begin(); x! = m.end();x++)
    {
         cout<<x->first<<" "<<x->second<<endl;
    }
    return 0;
}