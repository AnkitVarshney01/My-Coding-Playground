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

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n, a, b;
        cin >> n >> a >> b;
        vln ans;
        if (a == 0 && b == 0)
        {
            for (ln i = 0; i < n; i++)
            {
                cout << i + 1 << " ";
            }
        }
        else if ((abs(a - b) == 1 || a - b == 0) && (a + b) <= n - 2)
        {
            if (a >= b)
            {
                ln tempA = a;
                ln i = 0, j = 0;
                while (a > 0)
                {
                    if (j % 2 == 0)
                        ans.pb(i + 1);
                    else
                    {
                        ans.pb(n - i);
                        a--;
                        i++;
                    }
                    j++;
                }
                ln I = i;
                if (tempA > b)
                {
                    while (n - i > I)
                    {
                        ans.pb(n - i);
                        i++;
                    }
                    // ans.pb(n - i);
                }
                if (tempA == b)
                {
                    while (i < n - b)
                    {
                        ans.pb(i + 1);
                        i++;
                    }
                }
            }
            else
            {
                ln i = 0, j = 0;
                ln tempB = b;
                while (b > 0)
                {
                    if (j % 2 == 0)
                        ans.pb(n - i);
                    else
                    {
                        ans.pb(i + 1);
                        b--;
                        i++;
                    }
                    j++;
                }
                while (i < n - tempB)
                {
                    ans.pb(i + 1);
                    i++;
                }
            }
            for (ln i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
        }
        else
            cout << -1;
        cout << endl;
    }

    return 0;
}