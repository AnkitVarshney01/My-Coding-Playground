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
        vln a(n);
        map<int, int> mp;
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        vln ans;
        for (auto i : mp)
        {
            if (i.ss >= k)
                ans.pb(i.ff);
        }
        ans.pb(0);

        if (ans.size() == 1)
            cout << -1;
        else
        {
            ln lans = ans[0], rans = ans[0], diff = 0, l = 0, r = 0;
            l = ans[0];
            r = ans[0];
            for (ln i = 0; i < ans.size() - 1; i++)
            {
                if (ans[i] + 1 == ans[i + 1])
                {
                    r = ans[i + 1];
                }
                else
                {
                    if (r - l > diff)
                    {
                        diff = r - l;
                        lans = l;
                        rans = r;
                    }
                    l = ans[i + 1];
                    r = ans[i + 1];
                }
            }
            cout << lans << " " << rans;
        }
        cout << endl;
    }

    return 0;
}