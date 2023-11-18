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
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(all(a));

        ln ans[n];
        ln i = 0, k = 0;
        while (i < n)
        {
            ans[i] = a[k++];
            i += 2;
        }
        i = 1;
        while (i < n)
        {
            ans[i] = a[k++];
            i += 2;
        }

        ln f = 0;
        if (n % 2 == 0)
        {
            for (ln i = 2; i < n - 1; i += 2)
            {
                if (ans[i - 1] > ans[i] && ans[i + 1] > ans[i])
                {
                    f = 0;
                }
                else
                {
                    f = 1;
                    break;
                }
            }

            if (f == 0)
            {
                if (ans[n - 2] < ans[n - 1] && ans[n - 1] > ans[0] && ans[0] < ans[1])
                    f = 0;
                else
                    f = 1;
            }
        }
        else
        {
            for (ln i = 1; i < n - 1; i += 2)
            {
                if (ans[i - 1] < ans[i] && ans[i + 1] < ans[i])
                {
                    f = 0;
                }
                else
                {
                    f = 1;
                    break;
                }
            }

            if (f == 0)
            {
                if (ans[n - 2] > ans[n - 1] && ans[n - 1] > ans[0] && ans[0] > ans[1])
                    f = 0;
                else
                    f = 1;
            }
        }

        if (f)
            cout << "NO";
        else
        {
            cout << "YES\n";
            for (ln i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}