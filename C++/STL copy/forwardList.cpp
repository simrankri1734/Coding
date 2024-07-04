#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
    forward_list <int> l1;
    forward_list <int> l2;

    // l1.assign({1,2,3,4,5,6});

     l1.assign(5,10);
     l2.assign(l1.begin(),l1.end());

     l1.assign(5,10);

     l1.push_front(20);

    forward_list<int>:: iterator x;

    for(x = l1.begin() ; x!= l1.end(); x++)
    {
        cout<<*x<<" ";
    }

    x = l1.begin();
    advance(x,2);

    l1.insert_after(x, {1,2,3});
        for(x = l1.begin() ; x!= l1.end(); x++)
    {
        cout<<*x<<" ";
    }
       cout<<endl<<"list 2 -> "<<endl;
       l2.pop_front();                  //pop=delete

        for(x = l1.begin() ; x!= l1.end(); x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;

    return 0;
}