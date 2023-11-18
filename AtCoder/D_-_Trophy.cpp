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
#define pii pair<ln, ln>
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
    vector<pii> a;
    for (ln i = 0; i < n; i++)
    {
        ln x, y;
        cin >> x >> y;
        a.pb({x, y});
    }

    unsigned long long int ans = a[0].first + (q * a[0].second), sum = a[0].first + a[0].second;
    for (ln i = 1; i < n; i++)
    {
        ans = min(ans, sum + a[i].first + ((q - i) * a[i].second));
        sum += a[i].first + a[i].second;
        // cout << ans << endl;
    }
    cout << ans;

    return 0;
}