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
    vector<vln> x(t, vln(2)), y(t, vln(2));
    ln mnx = INT_MAX, mxx = INT_MIN, mny = INT_MAX, mxy = INT_MIN;
    for (ln i = 0; i < t; i++)
    {
        cin >> x[i][0] >> x[i][1];
        mnx = min(mnx, x[i][0]);
        mxx = max(mxx, x[i][1]);
        cin >> y[i][0] >> y[i][1];
        mny = min(mny, y[i][0]);
        mxy = max(mxy, y[i][1]);
    }

    vector<vln> mat(mxy + 1, vln(mxx + 1, 0));
    for (ln i = 0; i < t; i++)
    {
        for (ln xc = x[i][0]; xc < x[i][1]; xc++)
        {
            for (ln yc = y[i][0]; yc < y[i][1]; yc++)
            {
                mat[yc][xc] = 1;
            }
        }
    }

    ln cnt = 0;
    for (ln i = 0; i <= mxy; i++)
    {
        for (ln j = 0; j <= mxx; j++)
        {
            // cout << mat[i][j] << " ";
            if (mat[i][j] == 1)
                cnt++;
        }
        // cout << endl;
    }

    cout << cnt;
    return 0;
}