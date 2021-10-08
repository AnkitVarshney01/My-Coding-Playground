#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <vector>
#include <stdlib.h>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <random>
#include <numeric>
#include <iomanip>
#include <chrono>
#include <cmath>
#include <cassert>
#include <array>

#define int long long
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int dif = abs(a - b);
        int maxLength = 2 * dif;

        if (maxLength < c || a > maxLength || b > maxLength)
            cout << -1;
        else
        {
            if (c - dif < 1)
                cout << c + dif;
            else
                cout << c - dif;
            // if (c <= maxLength / 2)
            // {
            //     if (c + dif <= maxLength)
            //     {
            //         cout << c + dif;
            //     }
            //     else
            //         cout << -1;
            // }
            // else if (c > maxLength / 2)
            // {
            //     if (c - dif >= 1)
            //         cout << c - dif;
            //     else
            //         cout << -1;
            // }
            // else
            //     cout << -1;

            // if (c + dif <= maxLength)
            // {
            //     cout << c + dif;
            // }
            // else if (c - dif >= 1 && c - dif <= maxLength)
            // {
            //     cout << c - dif;
            // }
            // else if (c + dif > maxLength)
            // {
            //     cout << -1;
            // }
            // else if (c - dif < 1)
            // {
            //     cout << -1;
            // }
        }
        cout << endl;
    }

    return 0;
}