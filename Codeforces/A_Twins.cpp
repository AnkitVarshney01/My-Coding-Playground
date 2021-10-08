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
#define MOD 1000000007
#define int long long
#define pb push_back
#define ss second
#define ff first
#define vi vector<int>
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
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    vector<int> den(t);
    for (int i = 0; i < t; i++)
    {
        cin >> den[i];
    }

    sort(den.begin(), den.end());

    if (t == 2)
    {
        if (den[1] > den[0])
            cout << 1;
        else
            cout << 2;
    }
    else
    {
        int sum1 = 0, sum2 = 0;
        int ans;
        for (int i = t - 1; i >= 0; i -= 2)
        {
            sum1 += den[i];
            if (i - 1 >= 0)
                sum2 += den[i - 1];
            if (sum1 > sum2)
            {
                ans = ((t - i) / 2) + 1;
            }
        }
        cout << ans;
    }

    return 0;
}