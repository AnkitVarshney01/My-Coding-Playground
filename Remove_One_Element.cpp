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
        int n;
        cin >> n;
        vector<int> a(n), b(n - 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());

        if (n == 2)
        {
            if ((b[0] - a[0]) > 0 && (b[0] - a[1]) > 0)
            {
                int x = (b[0] - a[0]) < (b[0] - a[1]) ? b[0] - a[0] : b[0] - a[1];
                cout << x;
            }
            else if (b[0] - a[1] > 0)
                cout << b[0] - a[1];
            else if (b[0] - a[0] > 0)
                cout << b[0] - a[0];
        }
        else
        {
            int diff = b[0] - a[0], diff2;
            int i = 1, j = 1, count = 0, ans;
            while (i < n && j < n - 1)
            {
                if (b[j] - a[i] == diff && i == j)
                {
                    i++;
                    j++;
                }
                else if (i == j + 1)
                {
                    break;
                }
                else
                {
                    diff2 = b[j - 1] - a[i];
                    i++;
                    ans = diff;
                }
            }
            ans = diff;
            if (i <= n - 1 && j == n - 1)
            {
                diff2 = b[j - 1] - a[i];
            }

            i = 1, j = 0;
            while (i < n && j < n - 1)
            {
                if (b[j] - a[i] == diff2)
                {
                    count++;
                }
                i++;
                j++;
            }
            if (ans > 0 && diff2 > 0)
            {
                if (count == n - 1)
                {
                    ans = min(ans, diff2);
                }
                cout << ans ;
            }
            else if (ans > 0)
                cout << ans;
            else if (diff2 > 0)
                cout << diff2;
        }
        cout << endl;
    }

    return 0;
}