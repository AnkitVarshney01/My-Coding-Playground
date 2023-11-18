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
        int n, k;
        cin >> n >> k;
        if (n == 1 && k == 1)
            cout << 1;
        else if (n > 1 && k == 1)
            cout << -1;
        else
        {
            vi a;
            int i = 1;
            for (; i <= k - 1; i++)
                a.pb(i);
            for (int j = n; j >= i; j--)
                a.pb(j);
            for (int k = 0; k < a.size(); k++)
            {
                cout << a[k] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}