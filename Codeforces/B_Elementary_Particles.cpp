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
        vi a(n);
        unordered_map<int, vi> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]].pb(i);
        }
        int max = INT_MIN;
        for (auto i : m)
        {
            for (int j = 0; j < i.ss.size() - 1; j++)
            {
                int temp = n - i.ss[j + 1] + i.ss[j];
                if (temp > max)
                    max = temp;
            }
        }
        if (max == INT_MIN)
            cout << -1;
        else
            cout << max;
        cout << endl;
    }

    return 0;
}