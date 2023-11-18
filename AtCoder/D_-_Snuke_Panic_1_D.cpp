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

unordered_map<string, ln> dp;

ln solve(int i, int t, int x, vector<vln> &a)
{
    if (i == a.size())
        return 0;

    string tm = to_string(i) + "@" + to_string(t) + "@" + to_string(x);

    if (dp[tm] != 0)
        return dp[tm];

    ln t1 = 0, t2 = 0;

    if (a[i][0] - t >= abs(a[i][1] - x))
        t1 = a[i][2] + solve(i + 1, a[i][0], a[i][1], a);
    t2 = solve(i + 1, t, x, a);

    return dp[tm] = max(t1, t2);
}

int main()
{
    fastio();

    ln n;
    cin >> n;

    vector<vln> a(n, vln(3));

    for (ln i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    cout << solve(0, 0, 0, a);

    return 0;
}