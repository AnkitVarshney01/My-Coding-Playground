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
        ln n, k;
        cin >> n >> k;
        vln a(n), f(31);

        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
            ln temp = a[i];
            ln j = 0;
            while (temp)
            {
                if (temp % 2 == 1)
                    f[j]++;
                temp /= 2;
                j++;
            }
        }
        for (ln i = 0; i < 31; i++)
        {
            f[i] = n - f[i];
        }

        // for (ln i = 0; i < 31; i++)
        // {
        //     cout << f[i] << " ";
        // }
        // cout << endl;

        ln i = 30;
        while (k && i >= 0)
        {
            if (k >= f[i])
            {
                k -= f[i];
                f[i] = 0;
            }
            i--;
        }

        ln p = 0, mul = 1;
        i = 0;
        while (i < 31)
        {
            if (f[i] == 0)
            {
                // cout << i << " " << f[i] << endl;
                p += mul;
            }
            mul *= 2;
            i++;
        }

        cout << p;
        cout << endl;
    }

    return 0;
}