#include<iostream>
using namespace std;

class Maximum
{
    public :

        template<class T >       //void swap using template
         T max(T a , T b)
        {
            return a>b ? a : b;
        }
};

int main()
{
    Maximum m;
    cout<<"Maximum = "<<m.max<char>('a','c')<<endl;
    return 0;
}