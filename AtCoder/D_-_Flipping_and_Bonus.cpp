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

bool sortCol(const vector<ln> &v1, const vector<ln> &v2)
{
    return v1[0] < v2[0];
}

ln solve(vln &a, map<ln, ln> &mp, int i, int cntr, vector<vln> &dp)
{
    if (i == a.size())
        return 0;

    if (dp[i][cntr] != -1)
        return dp[i][cntr];

    ln ans = max(a[i] + mp[cntr + 1] + solve(a, mp, i + 1, cntr + 1, dp), solve(a, mp, i + 1, 0, dp));

    return dp[i][cntr] = ans;
}

int main()
{
    fastio();
    ln n, m;
    cin >> n >> m;

    map<ln, ln> mp;

    vln x(n);
    for (ln i = 0; i < n; i++)
    {
        cin >> x[i];
        mp[i] = 0;
    }

    for (ln i = 0; i < m; i++)
    {
        ln c, y;
        cin >> c >> y;
        mp[c] = y;
    }

    vector<vln> dp(n, vln(n, -1));
    ln ans = solve(x, mp, 0, 0, dp);
    cout << ans;

    return 0;
}