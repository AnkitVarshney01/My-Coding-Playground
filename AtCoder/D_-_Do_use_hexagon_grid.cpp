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

void dfs(pair<ln, ln> i, map<pair<ln, ln>, bool> &vis, map<pair<ln, ln>, vector<pair<ln, ln>>> &adj)
{
    vis[i] = true;
    for (auto j : adj[i])
    {
        if (!vis[j])
            dfs(j, vis, adj);
    }
}

int main()
{
    fastio();
    ln n;
    cin >> n;

    map<pair<ln, ln>, ln> mp, MP;
    for (ln i = 0; i < n; i++)
    {
        ln u, v;
        cin >> u >> v;
        mp[{u, v}] = 1;
    }
    MP = mp;

    map<pair<ln, ln>, vector<pair<ln, ln>>> adj;
    for (auto i : MP)
    {
        ln x = i.ff.ff;
        ln y = i.ff.ss;

        // i - 1, j - 1
        if (mp[{x - 1, y - 1}])
        {
            adj[{x, y}].pb({x - 1, y - 1});
            adj[{x - 1, y - 1}].pb({x, y});
        }

        // i - 1, j
        if (mp[{x - 1, y}])
        {
            adj[{x, y}].pb({x - 1, y});
            adj[{x - 1, y}].pb({x, y});
        }

        // i, j + 1
        if (mp[{x, y + 1}])
        {
            adj[{x, y}].pb({x, y + 1});
            adj[{x, y + 1}].pb({x, y});
        }

        // i + 1, j + 1
        if (mp[{x + 1, y + 1}])
        {
            adj[{x, y}].pb({x + 1, y + 1});
            adj[{x + 1, y + 1}].pb({x, y});
        }

        // i + 1, j
        if (mp[{x + 1, y}])
        {
            adj[{x, y}].pb({x + 1, y});
            adj[{x + 1, y}].pb({x, y});
        }

        // i, j - 1
        if (mp[{x, y - 1}])
        {
            adj[{x, y}].pb({x, y - 1});
            adj[{x, y - 1}].pb({x, y});
        }
    }

    ln cnt = 0;

    map<pair<ln, ln>, bool> vis;
    for (auto i : MP)
        vis[i.ff] = false;

    for (auto i : MP)
    {
        // cout << i.ff.ff << " " << i.ff.ss << endl;
        if (!vis[i.ff])
        {
            cnt++;
            dfs(i.ff, vis, adj);
        }
    }

    cout << cnt;
    return 0;
}