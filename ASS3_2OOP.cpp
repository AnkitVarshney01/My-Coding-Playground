#include <iostream>
using namespace std;

int add(int &x, int &y)
{
    return (x + y);
}

int subtract(int &x, int &y)
{
    return (x - y);
}

float divide(int &x, int &y)
{
    return ((float)x / (float)y);
}

int multiply(int &x, int &y)
{
    return (x * y);
}

int main()
{
    int a, b;
    cout << "Input 2 numbers: ";
    cin >> a >> b;
    cout << endl;
    cout << "Sum of these numbers: " << add(a, b) << endl;
    cout << "Difference of these numbers: " << subtract(a, b) << endl;
    cout << "Division of these numbers: " << divide(a, b) << endl;
    cout << "Multiplication of these numbers: " << multiply(a, b) << endl;
}