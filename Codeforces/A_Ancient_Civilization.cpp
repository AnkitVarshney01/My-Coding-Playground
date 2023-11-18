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
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n, l;
        cin >> n >> l;
        vi v(n);
        int mat[n][l];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            for (int j = 0; j < l; j++)
            {
                mat[i][j] = v[i] % 2;
                v[i] /= 2;
            }
        }

        vi ans;
        for (int j = 0; j < l; j++)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += mat[i][j];
            }
            if (sum > n / 2)
                ans.pb(1);
            else
                ans.pb(0);
        }

        int sol = 0;
        int mul = 1;
        for (int i = 0; i < ans.size(); i++)
        {
            sol += (mul * ans[i]);
            mul *= 2;
        }
        cout << sol;

        cout << endl;
    }

    return 0;
}