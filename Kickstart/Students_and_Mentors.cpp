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
    ln tc = 1;
    while (t--)
    {
        vln ans;
        ln n;
        cin >> n;
        vln a(n);
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vln b = a;
        sort(all(b));

        for (ln i = 0; i < n; i++)
        {
            ln cur = a[i];
            cur *= 2;
            ln lb = lower_bound(b.begin(), b.end(), cur) - b.begin();
            if (lb == n)
                lb--;
            if (b[lb] == a[i])
            {
                lb--;
                ans.pb(b[lb]);
            }
            else if (b[lb] > cur)
            {
                lb--;
                if (b[lb] == a[i])
                    lb--;

                if (lb >= 0)
                    ans.pb(b[lb]);
                else
                    ans.pb(-1);
            }
            else
                ans.pb(b[lb]);
        }

        cout << "Case #" << tc++ << ": ";
        for (ln i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}