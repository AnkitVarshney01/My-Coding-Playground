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

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    ln tc = 1;
    while (t--)
    {
        ln n, m;
        cin >> n >> m;
        vln a(n);
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(all(a));

        double ans = 0;
        ln i = n - 1;
        while (m > 1)
        {
            ans += a[i];
            i--;
            m--;
        }

        vector<double> lo(i + 1, 0);
        for (ln j = 0; j <= i; j++)
        {
            lo[j] = a[j];
        }

        sort(all(lo));
        if (lo.size() % 2 == 0)
            ans += ((lo[lo.size() / 2] + lo[(lo.size() / 2) - 1]) / 2);
        else
            ans += lo[lo.size() / 2];

        cout << "Case #" << tc++ << ": " << fixed << setprecision(1) << ans;
        cout << endl;
    }

    return 0;
}