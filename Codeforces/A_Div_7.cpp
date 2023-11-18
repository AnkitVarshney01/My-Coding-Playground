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
    vi v;
    int j = 1;
    while (7 * j <= 999)
    {
        v.pb(7 * j);
        j++;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int lb = lower_bound(all(v), n) - v.begin();
        int ub = upper_bound(all(v), n) - v.begin();
        int c1 = 0, c2 = 0;
        if (n % 7 == 0)
            cout << n;
        else
        {
            if ((v[lb - 1] / 10) == (n / 10))
                cout << v[lb - 1];
            else
                cout << v[ub];
        }
        cout << endl;
    }

    return 0;
}