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

void dfs(int i, vector<bool> &vis, vln adj[], map<ln, ln> &mp, ln cnt)
{
    vis[i] = true;
    mp[i] = cnt;
    for (auto j : adj[i])
    {
        if (!vis[j])
            dfs(j, vis, adj, mp, cnt + 1);
    }
}

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    int count = 1;
    while (t--)
    {
        ln n, q;
        cin >> n >> q;
        vln adj[n + 1];
        for (ln i = 0; i < n - 1; i++)
        {
            ln u, v;
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }

        vln queries(q);
        for (ln i = 0; i < q; i++)
        {
            cin >> queries[i];
        }

        vector<bool> vis(n + 1, false);
        map<ln, ln> mp;
        ln cnt = 1;
        dfs(1, vis, adj, mp, cnt);
        // cout << 1;
        map<ln, ln> fr;
        for (auto i : mp)
        {
            fr[i.ss]++;
        }

        ln ans = 0;
        ln i = 1;
        while (q > 0)
        {
            if (q - fr[i] >= 0)
            {
                ans += fr[i];
            }
            q -= fr[i];
            i++;
        }

        cout << "Case #" << count++ << ": " << ans << endl;
    }

    return 0;
}