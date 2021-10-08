#include <iostream>
using namespace std;

template <class T>

void swap(int &x, int &y)
{
    x += y;
    y = x - y;
    x = x - y;
}

int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Numbers before swapping: \nx = " << x << "\ny = " << y << endl;
    swap(x, y);
    cout << "Numbers after swapping: \nx = " << x << "\ny = " << y << endl;
    return 0;
}