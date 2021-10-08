#include <iostream>
using namespace std;
int i = 1;
class bank
{
    float p, roi, t, si;

public:
    bank()
    {
        cout << "\nDefault Constructor is called Intializing all values";
        p = 100;
        roi = 5;
        t = 12;
    }
    bank(float P, float ROI, float T)
    {
        cout << "\nParameterized Constructor is called";
        p = P;
        roi = ROI;
        t = T;
    }
    bank(float P, float ROI)
    {
        cout << "\nParameterized Constructor is called Intializing Only Principle and Rate";
        cout << "\nTime Taken : 1 year";
        p = P;
        roi = ROI;
        t = 1.0 * 12;
    }
    bank(bank &b)
    {
        p = b.p;
        roi = b.roi;
        t = b.t;
    }

    void pical()
    {
        si = p * roi * t / 100;
        cout << "\nPrinciple Amount : " << p;
        cout << "\nTime : " << (int)t / 12 << " Years and " << (int)t % 12 << " Months";
        cout << "\nRate : " << roi << " %";
        cout << "\nInterest Amount : " << si;
    }

    ~bank()
    {
        cout << "\nObject " << i << " is destructed.";
        i++;
    }
};

int main()
{
    float principle, rate, time1, time2;
    cout << "Enter principle: ";
    cin >> principle;
    cout << "Enter rate of interest (between 4% to 10%): ";
    cin >> rate;
    cout << "Enter time period in years months format: ";
    cin >> time1 >> time2;
    bank b1(principle, rate, (time1 * 12 + time2));
    b1.pical();
    bank b2;
    b2.pical();
    bank b3(5000, 6.3);
    b3.pical();
    return 0;
}