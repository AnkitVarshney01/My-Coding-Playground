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
    int n, l, w, c = 0;
    cin >> n >> l >> w;
    vi a(n);

    vector<pair<int, int>> v, f;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back({a[i], a[i] + w});
    }

    int i = 0;
    while (i < v.size() - 1)
    {
        if (v[i].ss >= v[i + 1].ff)
        {
            v[i + 1].ff = v[i].ff;
        }
        else
        {
            f.pb({v[i].ff, v[i].ss});
        }
        i++;
    }
    f.pb({v[i].ff, v[i].ss});

    // for (int j = 0; j < f.size(); j++)
    //     cout << f[j].ff << " " << f[j].ss << endl;

    i = 1;
    if (f[0].ff % w == 0)
        c += ((f[0].ff - 0) / w);
    else
        c += ((f[0].ff - 0) / w) + 1;
    while (i < f.size())
    {
        int inv = (f[i].ff - f[i - 1].ss);
        if (inv % w == 0)
            c += (inv / w);
        else
            c += (inv / w) + 1;
        i++;
    }

    if ((l - f[i - 1].ss) % w == 0)
        c += ((l - f[i - 1].ss) / w);
    else
        c += ((l - f[i - 1].ss) / w) + 1;

    cout << c;

    return 0;
}