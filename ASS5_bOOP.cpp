#include <iostream>
using namespace std;

class complex;

class COMPLEXSUM
{
public:
    void sum(complex);
};

class complex
{
    int r1, i1, r2, i2;

public:
    void getExp()
    {
        cout << "Enter 1st complex no.: \n";
        cout << "Enter real part: ";
        cin >> r1;
        cout << "Enter imaginary part: ";
        cin >> i1;
        cout << "Enter 2nd complex no.: \n";
        cout << "Enter real part: ";
        cin >> r2;
        cout << "Enter imaginary part: ";
        cin >> i2;
    }
    friend void COMPLEXSUM::sum(complex);
    friend void complexsum(complex);
};

void COMPLEXSUM::sum(complex c)
{
    cout << "Member friend function called.\n";
    cout << "Sum of complex no.: " << c.r1 + c.r2 << " + i" << c.i1 + c.i2 << "\n";
}

void complexsum(complex c)
{
    cout << "Natural friend function called.\n";
    cout << "Sum of complex no.: " << c.r1 + c.r2 << " + i" << c.i1 + c.i2 << "\n";
}

int main()
{
    complex c;
    COMPLEXSUM C;
    c.getExp();
    C.sum(c);
    complexsum(c);
    return 0;
}