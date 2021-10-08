#include <iostream>
using namespace std;

inline void add(int x, int y)
{
    int sum = (x + y);
    cout << "Sum of these numbers: " << sum << endl;
}

inline void subtract(int x, int y)
{
    int diff = (x - y);
    cout << "Difference of these numbers: " << diff << endl;
}

inline void divide(int x, int y)
{
    float divide = ((float)x / (float)y);
    cout << "Division of these numbers: " << divide << endl;
}

inline void multiply(int x, int y)
{
    int prod = (x * y);
    cout << "Product of these numbers: " << prod << endl;
}

int main()
{
    int a, b;
    cout << "Input 2 numbers: ";
    cin >> a >> b;
    cout << endl;

    add(a, b);
    subtract(a, b);
    divide(a, b);
    multiply(a, b);

    return 0;
}