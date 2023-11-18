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

struct comp
{
    bool operator()(pair<ln, ln> &a, pair<ln, ln> &b)
    {
        if (a.first == b.first)
            return a.second < b.second;

        return a.first > b.first;
    }
};

int main()
{
    fastio();
    ln n, m;
    cin >> n >> m;

    vln cost(n);
    for (ln i = 0; i < n; i++)
    {
        cin >> cost[i];
    }

    vln adj[n + 1];

    for (ln i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    priority_queue<pair<ln, ln>, vector<pair<ln, ln>>, comp> pq;

    return 0;
}