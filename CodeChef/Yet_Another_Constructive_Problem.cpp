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

int ans(int x)
{
    vi v;
    int i = 2, Ans = 0, p = 1;
    while (x)
    {
        v.pb(x % 2);
        x /= 2;
    }
    v.pb(1);
    i = 0;
    while (i < v.size())
    {
        Ans += (v[i] * p);
        i++;
        p *= 2;
    }
    return Ans;
}

int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        int a = 0, b = x, c = ans(x);

        cout << a << " " << b << " " << c;
        cout << endl;
    }

    return 0;
}