#include<iostream>
using namespace std;

class Dollar
{
private:
    int d;

public:
    Dollar() {
        cout << "Dollar DC called" << endl; 
        d = 0; // Default value
    }

    Dollar(int x) {
        cout << "Dollar PC called" << endl;
        d = x;
    }

    void display() {
        cout << "Dollar = " << d << endl;
    }

    operator int() {
        cout << "Dollar class int() called" << endl;
        return d;
    }

    operator Rupee(); // Declaration of conversion operator for Rupee
};

class Rupee
{
private:
    int r;

public:
    Rupee() {
        cout << "Rupee DC called" << endl;
        r = 0; // Default value
    }

    Rupee(int x) {
        cout << "Rupee PC called" << endl;
        r = x;
    }

    void display() {
        cout << "Rupee = " << r << endl;
    }

    operator int() {
        cout << "Rupee class int() called" << endl;
        return r;
    }

    operator Dollar() {
        cout << "Rupee class Dollar() called" << endl;
        Dollar a = r;
        return a;
    }
};

// Implementation of Dollar to Rupee conversion operator
Dollar::operator Rupee() {
    cout << "Dollar class Rupee() called" << endl;
    Rupee a = d;
    return a;
}

int main()
{
    Rupee a = 5;  
    a.display();

    int x = a;
    cout << "x = " << x << endl;

    Dollar b = 10;
    b.display();

    int y = b;
    cout << "y = " << y << endl;

    Rupee c = b;
    c.display();  

    Dollar d = c;
    d.display();

    return 0;
}
