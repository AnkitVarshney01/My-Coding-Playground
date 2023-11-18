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

#define int long long
#define MOD 1000000007
#define int long long
#define pb push_back
#define ss second
#define ff first
#define vi vector<int>
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

bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[0] < v2[0];
}

int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> ab(n, vi(2, 0));
        for (int i = 0; i < n; i++)
            cin >> ab[i][0];
        for (int i = 0; i < n; i++)
            cin >> ab[i][1];
        sort(ab.begin(), ab.end(), sortcol);

        for (int i = 0; i < n; i++)
        {
            if (ab[i][0] <= k)
            {
                k += ab[i][1];
            }
        }
        cout << k;

        // for (int i = 0; i < n; i++)
        // {
        //     cout << ab[i][0] << " " << ab[i][1] << endl;
        // }

        cout << endl;
    }

    return 0;
}