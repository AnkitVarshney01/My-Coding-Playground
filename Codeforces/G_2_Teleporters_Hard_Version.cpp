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
        ln n, coins;
        cin >> n >> coins;
        vln a(n);
        vector<vln> t;
        ln id = 0, mn = INT_MAX;
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
            if (mn > a[i] + i + 1)
            {
                mn = a[i] + i + 1;
                id = i;
            }
            t.pb({a[i] + i + 1, i + 1});
            t.pb({a[i] + n - i, i + 1});
        }

        sort(all(t), sortCol);

        // for (ln i = 0; i < t.size(); i++)
        // {
        //     cout << t[i][0] << " " << t[i][1] << endl;
        // }

        map<ln, bool> mp;
        mp[id] = true;

        ln i = 0, cnt = 0;
        
        if (coins >= (a[id] + id + 1))
        {
            cnt++;
            coins -= (a[id] + id + 1);
        }

        while (coins > 0 && i < 2 * n)
        {
            if (coins >= t[i][0] && mp[t[i][1]] == false)
            {
                coins -= t[i][0];
                mp[t[i][1]] = true;
                cnt++;
            }

            i++;
        }

        cout << cnt;
        cout << endl;
    }

    return 0;
}