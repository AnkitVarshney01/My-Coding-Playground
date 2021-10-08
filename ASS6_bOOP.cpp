#include <iostream>
using namespace std;

#define size 100
#define pi 3.14

class shapeArea
{

public:
    void area(float r)
    {
        cout << "Your Input: " << r << endl;
        int ar = pi * r * r;
        cout << "Shape: Circle\n";
        cout << "Area of Circle: " << ar << endl;
    }
    void area(double D1, double D2)
    {
        cout << "Your Input: " << D1 << " " << D2 << endl;
        double ar = (D1 * D2) / 2;
        cout << "Shape: Rhombus\n";
        cout << "Area of Rhombus: " << ar << endl;
    }
    void area(int S)
    {
        cout << "Your Input: " << S << endl;
        int ar = S * S;
        cout << "Shape: Square\n";
        cout << "Area of Square: " << ar << endl;
    }
    void area(long l, long w)
    {
        cout << "Your Input: " << l << " " << w << endl;
        int ar = l * w;
        cout << "Shape: Rectangle\n";
        cout << "Area of Rectangle: " << ar << endl;
    }
    void area(unsigned int sR)
    {
        cout << "Your Input: " << sR << endl;
        int ar = 4 * pi * sR * sR;
        cout << "Shape: Sphere\n";
        cout << "Area of Sphere: " << ar << endl;
    }
};

int main()
{
    shapeArea s;

    int a = 5, b = 7, c = 12;
    float d = 3.6, e = 4.8, f = 8.2;
    long g = 14, h = 43, i = 10;
    double j = 2.312, k = 20.62, l = 24.21;
    unsigned int m = 6, n = 32, o = 3;

    s.area(a);    // int
    cout << endl;
    s.area(b, d); // int , float
    cout << endl;
    s.area(e, k); // float , double
    cout << endl;
    s.area(m, f); // unsigned int , float
    cout << endl;
    s.area(f, d); // float , float
    cout << endl;
    s.area(k, l); // double , double
    cout << endl;
    s.area(h, i); // long , long
    cout << endl;
    s.area(n);    // unsigned int
    cout << endl;
    s.area(k, c); // double , int
    cout << endl;
    s.area(i, o); // long , unsigned int
    cout << endl;
    s.area(e);    // float
    cout << endl;
    s.area(n);    // unsigned int
    
    return 0;
}