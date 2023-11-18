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
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v;
        int p = 1;
        while (p < n)
        {
            p *= 2;
        }
        int i = 1;
        p /= 2;
        while (i < p)
        {
            v.pb(i);
            i++;
        }
        v.pb(0);
        while (i < n)
        {
            v.pb(i);
            i++;
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }

        cout << endl;
    }

    return 0;
}