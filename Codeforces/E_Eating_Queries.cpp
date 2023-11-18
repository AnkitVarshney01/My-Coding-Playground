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
        ln n, q;
        cin >> n >> q;
        vln c(n);
        vln sum;
        ln totSgr = 0;
        for (ln i = 0; i < n; i++)
        {
            cin >> c[i];
            totSgr += c[i];
        }
        sort(all(c));
        sum.pb(c[n - 1]);
        for (ln i = n - 2; i >= 0; i--)
        {
            sum.pb(c[i] + c[i + 1]);
            c[i] += c[i + 1];
        }
        // for (ln i = 0; i < sum.size(); i++)
        // {
        //     cout << sum[i] << endl;
        // }
        ln s = sum.size();
        while (q--)
        {
            ln req, i = 0;
            cin >> req;
            ln l = 0, r = s - 1;
            if (sum[s - 1] > req)
            {
                while (l <= r)
                {
                    ln mid = (l + r) / 2;
                    if (sum[mid] > req)
                    {
                        r = mid - 1;
                    }
                    else if (sum[mid] < req)
                    {
                        l = mid + 1;
                    }
                    else
                    {
                        l = mid;
                        break;
                    }
                }
                cout << l + 1 << endl;
            }
            else if (sum[s - 1] == req)
                cout << n << endl;
            else
                cout << -1 << endl;
        }
    }

    return 0;
}