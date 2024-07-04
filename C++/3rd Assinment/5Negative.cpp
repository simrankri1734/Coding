#include<iostream>
using namespace std;

class Numbers {
    int x, y, z;
public:
    // Methods
    void accept() {
        cout << "\nEnter three Numbers";
        cout << "\n---------------";
        cout << "\nFirst Number: ";
        cin >> x;
        cout << "Second Number: ";
        cin >> y;
        cout << "Third Number: ";
        cin >> z;
        cout << "----------------\n";
    }

    void display() {
        cout << " " << x << "\t" << y << "\t" << z;
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

int main() {
    Numbers num;
    num.accept();
    cout << "\nNumbers are :\n\n";
    num.display();

    // Using unary minus operator
    Numbers negativeNum = -num;

    cout << "\n\nNegative Numbers are :\n\n";
    negativeNum.display();

    return 0;
}
