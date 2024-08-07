#include<iostream>
#include<list>

using namespace std;


int main()
{
    list<int> l1;

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_front(4);
    l1.push_front(5);

    //5->4->1->2->3

    list<int>::iterator x = l1.begin();
    //x++;
    advance(x,2);

    l1.insert(x,10);

    l1.reverse();      //for reverse the array

    for(x = l1.begin(); x!= l1.end(); x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    return 0;
}