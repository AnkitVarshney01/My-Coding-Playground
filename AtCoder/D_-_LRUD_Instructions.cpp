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
    ln h, w, sr, sc;
    cin >> h >> w >> sr >> sc;

    ln n;
    cin >> n;

    map<ln, set<ln>> rows, cols;

    for (ln i = 0; i < n; i++)
    {
        ln u, v;
        cin >> u >> v;

        rows[u].insert(v);
        cols[v].insert(u);
    }

    ln q;
    cin >> q;

    while (q--)
    {
        char d;
        ln st;
        cin >> d;
        cin >> st;

        if (d == 'L')
        {
            ln tc = sc - st;
            if (tc < 1)
                tc = 1;

            if (!rows[sr].empty())
            {
                auto lb = rows[sr].lower_bound(tc);
                if (lb != rows[sr].end())
                {
                    if (*lb >= tc && *lb < sc)
                        sc = *lb + 1;
                    else
                        sc = tc;
                }
                else
                    sc = tc;
            }
            else
                sc = tc;
        }

        if (d == 'R')
        {
            ln tc = sc + st;

            if (tc > w)
                tc = w;

            if (!rows[sr].empty())
            {
                auto lb = rows[sr].lower_bound(sc);

                if (lb != rows[sr].end())
                {
                    if (*lb <= tc && *lb > sc)
                        sc = *lb - 1;
                    else
                        sc = tc;
                }
                else
                    sc = tc;
            }
            else
                sc = tc;
        }

        if (d == 'U')
        {
            ln tr = sr - st;

            if (tr < 1)
                tr = 1;

            if (!cols[sc].empty())
            {
                auto lb = cols[sc].lower_bound(tr);

                if (lb != cols[sc].end())
                {
                    if (*lb >= tr && *lb < sr)
                        sr = *lb + 1;
                    else
                        sr = tr;
                }
                else
                    sr = tr;
            }
            else
                sr = tr;
        }

        if (d == 'D')
        {
            ln tr = sr + st;

            if (tr > h)
                tr = h;

            if (!cols[sc].empty())
            {
                auto lb = cols[sc].lower_bound(sr);

                if (lb != cols[sc].end())
                {
                    if (*lb <= tr && *lb > sr)
                        sr = *lb - 1;
                    else
                        sr = tr;
                }
                else
                    sr = tr;
            }
            else
                sr = tr;
        }

        cout << sr << " " << sc << endl;
    }

    return 0;
}