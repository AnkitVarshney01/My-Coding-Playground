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
#include <unordered_map>

#define MOD 1000000007
#define ln long long int
#define pb push_back
#define ss second
#define ff first
#define vln vector<long long int>
#define gi greater<int>
#define all(a) a.begin(), a.end()
#define MAXN 100001
#define BLOCK 555
#define pii pair<int, int>
#define pmq priority_queue<int, vi, gi>
using namespace std;

void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

ln checkAns(ln m, vln v)
{
    ln sum = 0;
    for (ln i = 0; i < v.size() - 1; i++)
    {
        if (v[i + 1] - v[i] >= m)
            sum += m;
        else
            sum += (v[i + 1] - v[i]);
    }
    sum += m;
    return sum;
}

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n, h;
        cin >> n >> h;
        vln v(n);
        for (ln i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ln l = 1, r = 1e18 + 1;
        ln m = 1, ans = 1;
        while (l <= r)
        {
            m = (l + r) / 2;    
            ln c = checkAns(m, v);
            if (c >= h)
            {
                r = m - 1;
                ans = m;
            }
            else if (c < h)
            {
                l = m + 1;
            }
            // cout << l << " " << r << endl;
        }
        cout << ans;

        cout << endl;
    }

    return 0;
}