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
        ln n, c = 0;
        cin >> n;
        vln a(n), b(n);
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ln i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<pii> p;

        vln tempA = a, tempB = b;
        sort(all(tempA));
        sort(all(tempB));
        if (a == tempA && b == tempB)
            cout << 0 << endl;
        else
        {
            bool f = 0;
            for (ln i = 1; i < n; i++)
            {
                ln currA = a[i], currB = b[i];
                ln k = i - 1;
                while (k >= 0)
                {
                    if (a[k] >= currA && b[k] >= currB)
                    {
                        a[k + 1] = a[k];
                        b[k + 1] = b[k];
                        p.pb({k, k + 1});
                        c++;
                    }
                    else if (a[k] <= currA && b[k] <= currB)
                        break;
                    else
                    {
                        f = 1;
                        break;
                    }
                    k--;
                }

                if (f)
                    break;

                a[k + 1] = currA;
                b[k + 1] = currB;
            }

            if (f)
                cout << -1 << endl;
            else
            {
                cout << c << endl;
                for (ln i = 0; i < c; i++)
                {
                    cout << p[i].first + 1 << " " << p[i].second + 1 << endl;
                }
            }
        }
    }
    return 0;
}
