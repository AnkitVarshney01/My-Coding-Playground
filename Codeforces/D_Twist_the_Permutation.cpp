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
        ln n;
        cin >> n;
        int x;
        vln v(n + 1);
        for (ln i = 0; i < n; i++)
        {
            cin >> x;
            v[x] = i + 1;
        }

        vln ans;
        ln i = n;
        while (i > 1)
        {
            int idx = v[i];
            if (idx == i)
                ans.pb(0);
            else
                ans.pb(idx);
            for (ln j = 1; j <= i; j++)
            {
                v[j] -= idx;
                if (v[j] <= 0)
                {
                    v[j] += i;
                }
            }
            i--;
        }
        cout << 0 << " ";
        for (ln i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;
}