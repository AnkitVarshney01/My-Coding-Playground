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

ln n, m;

vector<vln> dp(2003, vln(2005, -1));

ln solve(int i, int p, vln &a)
{
    if (i >= n || p > m)
        return -1e18;

    if (p == m)
        return max(p * a[i], solve(i + 1, p, a));

    if (dp[i][p] != -1)
        return dp[i][p];

    ln ans;
    ans = max((p * a[i]) + solve(i + 1, p + 1, a), solve(i + 1, p, a));

    return dp[i][p] = ans;
}

int main()
{
    fastio();
    cin >> n >> m;
    vln a(n);
    for (ln i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << solve(0, 1, a);

    return 0;
}