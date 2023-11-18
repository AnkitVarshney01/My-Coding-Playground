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
        int n, p, k;
        cin >> n >> p >> k;
        int days = 0;

        if (n % k == 0)
        {
            days += ((p % k) * (((n - 1) / k) + 1));
            days += ((p / k) + 1);
        }
        else
        {
            if (p % k > n % k)
            {
                days += ((p % k) * (((n - 1) / k))) + (n % k);
                days += ((p / k) + 1);
            }
            else
            {
                days += ((p % k) * (((n - 1) / k) + 1));
                days += ((p / k) + 1);
            }
        }
        cout << days;
        cout << endl;
    }

    return 0;
}