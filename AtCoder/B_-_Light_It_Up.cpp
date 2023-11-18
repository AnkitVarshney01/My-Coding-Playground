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
#define vvln vector<vector<long long int>>
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

ln calDist(ln x1, ln x2, ln y1, ln y2)
{
    return ((abs(x2 - x1) * abs(x2 - x1)) + (abs(y2 - y1) * abs(y2 - y1)));
}

int main()
{
    fastio();
    ln n, k;
    cin >> n >> k;

    ln ch[1001] = {0};
    vln a(k);
    for (ln i = 0; i < k; i++)
    {
        cin >> a[i];
        ch[a[i]] = 1;
    }

    vvln v(n, vln(2));
    for (ln i = 0; i < n; i++)
    {
        cin >> v[i][0];
        cin >> v[i][1];
    }

    ln mxDist = INT_MIN;

    for (ln i = 0; i < k; i++)
    {
        ln x1 = v[a[i] - 1][0];
        ln y1 = v[a[i] - 1][1];
        for (ln j = 0; j < n; j++)
        {
            ln x2 = v[j][0];
            ln y2 = v[j][1];

            ln dist = calDist(x1, x2, y1, y2);

            if (dist > mxDist)
                mxDist = dist;
        }
    }

    float ans = sqrt(mxDist);

    cout << ans;

    return 0;
}