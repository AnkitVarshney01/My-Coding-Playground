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

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n;
        cin >> n;
        vln v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (v[0] == n || v[n - 1] == n)
        {
            vln l, r;
            ln i = 0, j = 0, k = n - 1;
            while (i < n)
            {
                if (v[j] > v[k])
                {
                    l.pb(v[j]);
                    j++;
                }
                else
                {
                    r.pb(v[k]);
                    k--;
                }
                i++;
            }
            reverse(l.begin(), l.end());
            for (i = 0; i < l.size(); i++)
                cout << l[i] << " ";
            for (i = 0; i < r.size(); i++)
                cout << r[i] << " ";
        }
        else
            cout << -1;

        cout << endl;
    }

    return 0;
}