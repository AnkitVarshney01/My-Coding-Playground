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

ln solve(int i, int j, ln &n, vector<vln> &g, vector<bool> &vis, vector<vln> &dp)
{
    if (i == n - 1 || j == n)
        return INT_MIN;

    ln p = INT_MIN, np = INT_MIN;
    if (!vis[i] && !vis[j])
    {
        vis[i] = vis[j] = true;
        p = g[i][j] + solve(i + 1, i + 1, n, g, vis, dp);
    }
    vis[j] = false;
    np = solve(i, j + 1, n, g, vis, dp);

    return max(p, np);
}

int main()
{
    fastio();
    ln n;
    cin >> n;
    vector<vln> g(n + 1, vln(n + 1, -1));
    vector<bool> vis(n + 1, false);
    for (ln i = 1; i <= n; i++)
    {
        for (ln j = i + 1; j <= n; j++)
            cin >> g[i][j];
    }

    vector<vln> dp(n + 1, vln(n + 1, -1));

    cout << solve(1, 2, n, g, vis, dp);

    return 0;
}