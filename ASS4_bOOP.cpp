#include <iostream>
using namespace std;
#define pi 3.14
class circle
{
    float radius;
    float area;
    static float sumArea;

public:
    circle()
    {
        radius = 10;
    }
    circle(float r)
    {
        radius = r;
    }
    circle(circle &c)
    {
        radius = c.radius;
    }
    void areaofCircle(int i)
    {
        area = pi * radius * radius;
        cout << "Radius of circle " << i << " : " << radius << ", Area of circle " << i << " : " << area << endl;
    }
    void totalArea()
    {
        sumArea += area;
    }
    static void allCircleArea()
    {
        cout << "Sum of area of all circles: " << sumArea << endl;
    }
};

float circle::sumArea = 0;

int main()
{
    circle c1, c2(22.3), c3(c2);
    c1.areaofCircle(1);
    c2.areaofCircle(2);
    c3.areaofCircle(3);
    c1.totalArea();
    c2.totalArea();
    c3.totalArea();
    circle::allCircleArea();
    return 0;
}