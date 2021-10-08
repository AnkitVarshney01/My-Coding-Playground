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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int probCount = 0;
        map<int, int> level;
        level[a]++;
        level[b]++;
        level[c]++;
        level[d]++;
        for (auto i : level)
        {
            if (i.second == 1)
            {
                probCount++;
            }
            else if (i.second == 2)
            {
                probCount+=2;
            }
            else if (i.second==3)
            {
                probCount++;
            }
        }

        cout << probCount / 2;

        cout << endl;
    }

    return 0;
}