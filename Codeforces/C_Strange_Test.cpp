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
        int a, b;
        cin >> a >> b;

        int ans = b - a;

        for (int a1 = a; a1 < b; a1++)
        {
            int b1 = 0;
            for (int i = 21; i >= 0; i--)
            {
                if ((b >> i) & 1)
                    b1 += (1 << i);
                else if ((a1 >> i) & 1)
                {
                    b1 += (1 << i);
                    break;
                }
            }

            ans = min(ans, a1 - a + b1 - b + (a1 | b1) - b1 + 1);
        }

        cout << ans;
        cout << endl;
    }

    return 0;
}