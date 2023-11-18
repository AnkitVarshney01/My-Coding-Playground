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
    return v1[0] > v2[0];
}

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n, m;
        cin >> n >> m;
        ln M = m;
        vector<ln> a(n);
        map<ln, ln> mp;
        vector<pair<ln, ln>> p;
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        while (m--)
        {
            int x, y;
            cin >> x >> y;
            mp[x]++;
            mp[y]++;
            p.push_back({x, y});
        }

        if (M % 2 == 1)
        {
            ln mn = INT_MAX;

            for (int i = 1; i <= n; i++)
            {
                if (mp[i] % 2 == 1)
                    mn = min(mn, a[i - 1]);
            }

            for (ln i = 0; i < p.size(); i++)
            {
                ln x = p[i].first;
                ln y = p[i].second;

                if ((mp[x] + mp[y]) % 2 == 0)
                    mn = min(mn, a[x - 1] + a[y - 1]);
            }

            cout << mn;
        }
        else
            cout << 0;
        cout << endl;
    }

    return 0;
}