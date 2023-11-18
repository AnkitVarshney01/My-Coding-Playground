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
        ln n;
        cin >> n;
        string a;
        cin >> a;
        ln maxm = INT_MIN, mIdx = -1;
        for (ln i = 0; i < n; i++)
        {
            if (maxm < a[i] - '0')
            {
                maxm = a[i] - '0';
                mIdx = i;
            }
        }

        // for (ln i = 0; i < n; i++)
        // {
        //     cout << a[i];
        // }
        // cout << endl;
        // cout << 11 - (a[0] - '0') << endl;
        // cout << maxm << " " << mIdx << endl;
        
        vln v;

        if (maxm == 9 && mIdx == 0)
        {
            vln all1(n + 1);
            for (ln i = 0; i < n + 1; i++)
            {
                all1[i] = 1;
            }

            reverse(all(a));

            for (ln i = 0; i < n; i++)
            {
                if ((a[i] - '0') == 0)
                {
                    v.pb(all1[i] - (a[i] - '0'));
                }
                else if ((a[i] - '0') == 1)
                {
                    if (all1[i] == 1)
                        v.pb(0);
                    else
                    {
                        v.pb(9);
                        all1[i + 1] = 0;
                    }
                }
                else
                {
                    if (all1[i] == 1)
                        v.pb(11 - (a[i] - '0'));
                    else
                        v.pb(10 - (a[i] - '0'));
                    all1[i + 1] = 0;
                }
            }
            reverse(all(v));
            for (ln i = 0; i < n; i++)
            {
                cout << v[i];
            }
        }
        else
        {
            for (ln i = 0; i < n; i++)
            {
                v.pb(9 - (a[i] - '0'));
            }
            for (ln i = 0; i < n; i++)
                cout << v[i];
        }

        cout << endl;
    }

    return 0;
}