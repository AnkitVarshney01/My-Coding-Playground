#include <stdio.h>
#include <math.h>

#define pi 3.141592653
double power(float n, int i)
{
    float pn = 1;
    for (int j = 0; j < i; j++)
    {
        pn *= n;
    }

    return pn;
}

int powerm1(int i)
{
    int pm1 = -1;
    for (int j = 0; j < i; j++)
    {
        pm1 *= -1;
    }

    return pm1;
}

long int factorial(int n)
{
    if (n == 0)
        return 1;

    int fnm1 = factorial(n - 1);

    int fa = n * fnm1;

    return fa;
}

double sinfun(float n, int i)
{
    if (i == 7)
        return 0;

    double toaddm1 = sinfun(n, i + 1);
    // double sum = 0;
    double toadd = (power(n, (2 * i - 1)) * powerm1(i)) / factorial(2 * i - 1);
    toadd += toaddm1;

    return toadd;
}

float absolute(double n)
{
    float ans = n;
    if (n < 0)
        ans = n * -1;
    else
        ans = n;
    return ans;
}
int main()
{
    double n;
    printf("Enter the angle in radians:");
    scanf("%lf", &n);

    double temp = n;

    if (temp > 0)
        while (temp > 2 * pi)
            temp -= 2 * pi;
    else
        while (temp < -2 * pi)
            temp += 2 * pi;

    double t = temp;
    if (temp > pi)
        temp -= pi;
    else if (temp < -pi)
        temp += pi;

    int i = 1;
    double ans = sinfun(temp, i);
    if (t > pi || t < -pi)
        ans *= -1;

    printf("Calculated value of sine(%.4lf) : %lf", n, ans);

    printf("\nValue of sin(%0.4lf) using in-bulit sine function : %lf", n, sin(n));

    double error;
    if (sin(n) == 0)
        error = 0;
    else
        error = absolute(ans - sin(n));
    printf("\nAbsolute Error: %lf ", error);

    return 0;
}