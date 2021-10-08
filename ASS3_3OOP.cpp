#include <iostream>
using namespace std;

#define add(x, y) x + y
#define subtract(x, y) x - y
#define divide(x, y) x / y
#define multiply(x, y) x * y

int main()
{
    int a, b;
    cout << "Input 2 numbers: ";
    cin >> a >> b;
    cout << endl;
    cout << "Sum of these numbers: " << add(a, b) << endl;
    cout << "Difference of these numbers: " << subtract(a, b) << endl;
    cout << "Division of these numbers: " << divide((float)a, (float)b) << endl;
    cout << "Multiplication of these numbers: " << multiply(a, b) << endl;
}