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
        ln n;
        cin >> n;
        vln a(n);
        ln c0 = 0, c1 = 0;
        vln ans;
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                c1++;
            else
                c0++;
        }

        if (n == 3)
        {
            if (c0 == 1 || c0 == 3)
                cout << "YES" << endl
                     << "1 2 3";
            else
                cout << "NO";
        }
        else if (c0 >= 1)
        {
            if (c0 >= 3)
            {
                for (ln i = 0; i < n; i++)
                {
                    if (a[i] % 2 != 0 && ans.size() < 3)
                        ans.pb(i + 1);
                }
            }
            else if (c0 == 1 || c0 == 2)
            {
                for (ln i = 0; i < n; i++)
                {
                    if (ans.size() < 3 && a[i] % 2 != 0)
                    {
                        ans.pb(i + 1);
                        break;
                    }
                }
                for (ln i = 0; i < n; i++)
                {
                    if (ans.size() < 3 && a[i] % 2 == 0)
                        ans.pb(i + 1);
                }
            }
            sort(all(ans));
            cout << "YES" << endl;
            for (ln i = 0; i < 3; i++)
            {
                cout << ans[i] << " ";
            }
        }
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}