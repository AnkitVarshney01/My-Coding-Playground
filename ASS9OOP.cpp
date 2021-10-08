#include <iostream>
using namespace std;
class operatorOv
{
    int a;
    int b;

public:
    void getData()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void printData()
    {
        cout << "1st number: " << a << endl;
        cout << "2nd number: " << b << endl;
    }
    void operator!()
    {
        cout << "Unary operator not(!) is used. Updated values of object 1 are:\n";
        a = !a;
        b = !b;
    }
    void operator%=(operatorOv &O)
    {
        cout << "Assignment operator (%=) is used. Updated values of object 2 are:\n";
        a %= O.a;
        b %= O.b;
    }
};

int main()
{
    operatorOv o1, o2;

    cout << "Input data for Object 1: \n";
    o1.getData();
    o1.printData();
    cout << "Input data for Object 2: \n";
    o2.getData();

    o2 %= o1;
    o2.printData();

    !o1;
    o1.printData();

    return 0;
}