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

bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[1] < v2[1];
}

int32_t main()
{
    fastio();

    int n, l, k;
    cin >> n >> l >> k;
    vector<vector<int>> c(n, vi(2, 0));
    for (int i = 0; i < n; i++)
    {
        cin >> c[i][0];
    }

    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        c[i][1] = x;
    }
    sort(c.begin() + 1, c.end(), sortcol);

    int km = 0;
    int i = 0;
    if (k != 0)
        for (; i < n - k - 1; i++)
        {
            km += (c[i][1] * (c[i + 1][0] - c[i][0]));
        }
    km += (c[i][1] * (l - c[i][0]));
    cout << km;

    return 0;
}