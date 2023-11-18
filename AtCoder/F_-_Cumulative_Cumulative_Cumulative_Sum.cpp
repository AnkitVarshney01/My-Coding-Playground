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

#define MOD 998244353
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

int main()
{
    fastio();
    ln n, q;
    cin >> n >> q;
    vln a(n);
    for (ln i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vln b(n);
    b[0] = a[0];
    for (ln i = 0; i < n - 1; i++)
    {
        b[i + 1] = (b[i] + a[i + 1]) % MOD;
    }

    vln c(n);
    c[0] = b[0];
    for (ln i = 0; i < n - 1; i++)
    {
        c[i + 1] = (c[i] + b[i + 1]) % MOD;
    }

    vln d(n);
    d[0] = c[0];
    for (ln i = 0; i < n - 1; i++)
    {
        d[i + 1] = (d[i] + c[i + 1]) % MOD;
    }

    vector<pair<ln, ln>> p;
    while (q--)
    {
        ln inp, x, v;
        cin >> inp;
        cin >> x;
        if (inp == 1)
        {
            cin >> v;
            p.pb({x, v});
        }
        else
        {
            ln mul = (x * (x + 1)) / 2;
            ln sum = 0;
            for (auto i : p)
            {
                if (i.ff <= x)
                {
                    ln y = x - i.ff + 1;
                    d[x - 1] = (d[x - 1] + (((y * (y + 1)) / 2) * (i.ss - a[i.ff - 1]))) % MOD;
                }
            }
            cout << (d[x - 1]) % MOD << endl;
        }
    }

    return 0;
}