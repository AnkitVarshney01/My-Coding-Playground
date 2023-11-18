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
    while (t--)
    {
        ln n, s;
        cin >> n >> s;
        vln a(n);
        ln sum = 0;
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum == s)
            cout << 0;
        else if (sum < s)
            cout << -1;
        else
        {
            vln l1, r1;
            for (ln i = 0; i < n; i++)
            {
                if (a[i] == 1)
                    l1.pb(i + 1);
            }
            reverse(all(a));
            for (ln i = 0; i < n; i++)
            {
                if (a[i] == 1)
                    r1.pb(i + 1);
            }

            ln i = 0, j = sum - s;
            ln mn = min(l1[j - 1], r1[j - 1]);

            for (ln k = 1; k < j; k++)
            {
                mn = min(mn, l1[k - 1] + r1[j - k - 1]);
            }
            cout << mn;
        }

        cout << endl;
    }

    return 0;
}