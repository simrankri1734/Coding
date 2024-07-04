#include<iostream>
using namespace std;
 
 class Marks
 {
    int mark;
    public :
        Marks(int m)
        {
            mark = m;
        }

        void display()
        {
            cout<<mark<<endl;
        }
     Marks *operator->()   // Arrow operator overload
     {
        return this;
     }
 };

 int main()   
 {
    Marks m(50);
    m.display();
    m->display();

    return 0;
 }