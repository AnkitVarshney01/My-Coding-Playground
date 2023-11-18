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

vector<int> calFac(int n)
{
    vector<int> fac;
    fac.pb(1);
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            fac.pb(i);
            fac.pb(n / i);
        }
    }

    return fac;
}

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n;
        cin >> n;
        vln a(n);
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> fac = calFac(n);

        ln ans = 0;
        for (int i = 0; i < fac.size(); i++)
        {
            ln sz = fac[i];
            ln mx = 0, mn;
            ln j = 0;
            while (j < sz)
            {
                mx += a[j];
                j++;
            }

            mn = mx;

            while (j < n)
            {
                ln curSum = 0;
                curSum += a[j];
                j++;

                while (j < n && (j % sz) != 0)
                {
                    curSum += a[j];
                    j++;
                }

                if (mx < curSum)
                    mx = curSum;

                if (mn > curSum)
                    mn = curSum;

                if (mx - mn > ans)
                    ans = mx - mn;
            }
        }

        cout << ans;
        cout << endl;
    }

    return 0;
}