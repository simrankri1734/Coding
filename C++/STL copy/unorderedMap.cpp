#include<iostream>
#include<unordered_map>

//#include<bits/stdc++.h>  its include all the header files

using namespace std;

int main()
{
    unordered_map <string, int> m({{"simran",20}, {"saurabh",22},{"gaurav",26}});

    m["kajal"] = 20;

    unordered_map<string , int>:: iterator x;

    for(x = m.begin() ;x !=m.end();x++)
    {
        cout<<"key "<<x->first<<", value "<<x->second<<endl;
    }
    return 0;
}
        