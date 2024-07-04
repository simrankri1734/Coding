#include<iostream>
using namespace std;
class Nummbers
{
    int x,y,z;
    public:
    //methods
    void accept()
    {
        cout<<"\nEnter three Numbers";
        cout<<"\n---------------";
        cout<<"\n first Number:";
        cin>>x;
        cout<<"\n second Number:";
        cin>>y;
        cout<<"\n three Numbers";
        cin>>z;
        cout<<"\n----------------";
    }
    void display()
    {
        cout<<" "<<x<<"\t"<<y<<"\t"<<z;
    }
        // Overload unary minus operator
    Numbers operator-() {
        Numbers temp;
        temp.x = -x;
        temp.y = -y;
        temp.z = -z;
        return temp;
    }
};
int main()
{
    Numbers num;
    num.accept();
    cout<<"\n Numbers are :\n\n";
    num.display();

 // Using unary minus operator
    Numbers negativeNum = -num;
    cout<<"\n\n Negative Numbers are :\n\n";
    negativeNum.display();
    return 0;
}
