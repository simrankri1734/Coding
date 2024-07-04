/*#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    multimap <int , string> m;
//multiple map me [] use nhi karte h.
    m.insert({1,"prateek jain"});  // operator[] is not overloaded

    m.insert(pair<int,string>(2, "9555031137"));
//koi key allready print ho to new wala bhi same key print ho jayega
    m.insert({4, "bhopal"});

    m.insert({4,"Roorkee"});
    m.insert({3,"IIT Roorkee"});


//find or count dono se kisi number ko print kra sakte h
    auto y = m.find(4);

    cout<<"Value = "<<y->second<<endl;

    if(m.count(5) == 0)
    {
        cout<<"Key not found"<<endl;
    }
    else{
        cout<<"Key Found"<<endl;
    }

   // m.erase(4);
    multimap<int,string>::iterator x;

    for(x = m.begin();  x != m.end() ; x++)
    {
        //jo key usko first bolenge and value(string) ko second print karata h
        cout<<x->first<<"  "<<x->second<<endl;
    }

    return 0;
}*/





#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    multimap <int , string> m;
    //multiple map me [] use nhi karte h.
    m.insert(make_pair(1, "prateek jain"));

    m.insert(pair<int,string>(2, "9555031137"));
    //koi key allready print ho to new wala bhi same key print ho jayega
    m.insert(make_pair(4, "bhopal"));

    m.insert(make_pair(4,"Roorkee"));
    m.insert(make_pair(3,"IIT Roorkee"));


    //find or count dono se kisi number ko print kra sakte h
    auto y = m.find(4);

    cout<<"Value = "<<y->second<<endl;

    if(m.count(5) == 0)
    {
        cout<<"Key not found"<<endl;
    }
    else{
        cout<<"Key Found"<<endl;
    }

   // m.erase(4);
    multimap<int,string>::iterator x;

    for(x = m.begin();  x != m.end() ; x++)
    {
        //jo key usko first bolenge and value(string) ko second print karata h
        cout<<x->first<<"  "<<x->second<<endl;
    }

    return 0;
}
