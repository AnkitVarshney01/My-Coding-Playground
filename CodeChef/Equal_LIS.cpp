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
        if (n > 2)
        {
            vi ans;
            if (n % 2 == 0)
            {
                int i = 2;
                int j = n;
                for (int k = 0; k < n; k++)
                {
                    if (k == (n / 2) - 1)
                        ans.pb(1);
                    else if (i <= n / 2)
                        ans.pb(i++);
                    else
                        ans.pb(j--);
                }
            }
            else
            {
                int i = (n / 2) + 1;
                int j = n / 2;
                for (int k = 0; k < n; k++)
                {
                    if (i <= n)
                        ans.pb(i++);
                    else
                        ans.pb(j--);
                }
            }
            cout << "YES" << endl;
            for (int l = 0; l < n; l++)
            {
                cout << ans[l] << " ";
            }
        }
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}