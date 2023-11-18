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
    ln h, w;
    cin >> h >> w;
    string s[h];
    for (ln i = 0; i < h; i++)
    {
        cin >> s[i];
    }

    ln x1, y1, x2, y2;
    vln x, y;
    for (ln i = 0; i < h; i++)
    {
        for (ln j = 0; j < w; j++)
        {
            if (s[i][j] == 'o')
            {
                x.pb(i);
                y.pb(j);
            }
        }
    }
    x1 = x[0];
    y1 = y[0];
    x2 = x[1];
    y2 = y[1];

    cout << abs(x2 - x1) + abs(y2 - y1);

    return 0;
}