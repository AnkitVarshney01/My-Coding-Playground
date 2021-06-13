#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, x, y, k;
        cin >> a >> b >> c >> d >> k;
        x = abs(b - d);
        y = abs(a - c);
        int minSteps = x + y;
        if (abs(minSteps - k) % 2 == 0 && minSteps <= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}