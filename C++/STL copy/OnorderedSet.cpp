#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
    unordered_set <int> s = {2,3,4,5,6,7,8};

    unordered_set <int>::iterator x;

    for(x = s.begin(); x !=s.end(); x++)
    {
        cout<<*x<<" ";
    } 
    cout<<endl;
    return 0;
}