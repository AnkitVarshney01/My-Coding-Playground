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


ln solve(vln a, vln b, ln i1, ln j1, ln i2, ln j2, int k)
{

    if (k == 0)
        return 0;
    if (i1 > j1)
        return 0;
    if (i2 > j2)
        return 0;

    ln ans = max({a[i1] + solve(a, b, i1 + 1, j1, i2, j2, k - 1), a[j1] + solve(a, b, i1, j1 - 1, i2, j2, k - 1), b[i2] + solve(a, b, i1, j1, i2 + 1, j2, k - 1), b[j2] + solve(a, b, i1, j1, i2, j2 - 1, k - 1)});

    return ans;
}

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    ln tc = 1;
    while (t--)
    {
        ln n, m;
        cin >> n;
        vln a(n);

        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ln pra[n + 1];
        pra[0] = a[0];
        for (ln i = 1; i < n + 1; i++)
        {
            pra[i] = pra[i - 1] + a[i];
        }

        cin >> m;
        vln b(m);
        for (ln i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        ln prb[m + 1];
        prb[0] = b[0];
        for (ln i = 1; i < m + 1; i++)
        {
            prb[i] = prb[i - 1] + b[i];
        }

        ln k;
        cin >> k;

        ln ans = solve(a, b, 0, n - 1, 0, m - 1, k);
        // max(pra[k - 1], prb[k - 1]);
        // ln i = 0, j = 0;
        // while (i < n + 1 && j < m + 1)
        // {
        // }

        cout << "Case #" << tc++ << ": " << ans;
        cout << endl;
    }

    return 0;
}