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
        int k;
        cin >> k;
        int ls = sqrt(k);
        int es = 1 + ls * (ls + 1);
        int c = ls + 1, r = ls + 1;
        double i = sqrt(k);
        if (fmod(i, 1) == 0)
            cout << i << " " << 1 << endl;
        else
        {
            if (k > es)
                c -= (k - es);
            else if (k < es)
                r -= (es - k);
            else
                c = r = ls + 1;
            cout << r << " " << c << endl;
        }
    }

    return 0;
}