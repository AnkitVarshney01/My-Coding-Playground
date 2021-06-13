#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int g, p, x[11];
        x[0] = 0;
        cin >> g >> p >> x[1] >> x[2] >> x[3] >> x[4] >> x[5] >> x[6] >> x[7] >> x[8] >> x[9] >> x[10];
        int i = g + 1;
        int sum = 0;
        for (; i < 11; i++)
            sum += x[i];

        int noOfDays = sum / p;
        int remaining = sum % p;
        int min = noOfDays + 1;
        int max;

        int chefg = x[g] + remaining;
        max = noOfDays + (chefg / p);
        if (chefg % p != 0)
            max++;

        cout << min << " " << max << endl;
    }

    return 0;
}