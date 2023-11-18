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
        ln n, k;
        cin >> n >> k;
        vln a(n), h(n);

        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (ln i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        ln cur = 0;
        ln i = 0, j = 1;

        ln ans = INT_MIN;
        while (i < n)
        {
            while (j < n && cur + a[j - 1] <= k && h[j - 1] % h[j] == 0)
            {
                cur += a[j - 1];
                j++;
            }
            if (cur + a[j - 1] <= k)
                cur += a[j - 1];

            ans = max(ans, j - i);

            if (h[j - 1] % h[j] != 0)
            {
                i = j;
                j++;
                cur = 0;
            }
            else if (cur + a[j - 1] > k && h[j - 1] % h[j] == 0)
            {
                cur -= a[i];
                i++;
            }
        }

        cout << ans;
        cout << endl;
    }

    return 0;
}