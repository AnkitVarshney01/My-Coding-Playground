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
        ln n, h;
        cin >> n >> h;

        vln a(n);
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(all(a));

        ln gp = 2, bp = 1;

        ln i = 0;

        while (i < n && h > a[i])
        {
            // cout << 1 << " ";
            h += (a[i] / 2);
            i++;
        }
        cout << h << endl;
        while (gp > 0)
        {
            // cout << 2 << " ";

            // if (h * 2 >= a[i])
            // {
            h *= 2;
            gp--;
            // }
            // else
            //     break;

            while (i < n && h > a[i])
            {
                h += (a[i] / 2);
                i++;
            }
        }
        cout << h << endl;

        // if (h * 3 >= a[i])
        h *= 3;

        while (i < n && h > a[i])
        {
            // cout << 3 << " ";
            h += (a[i] / 2);
            i++;
        }

        cout << i;

        cout << endl;
    }

    return 0;
}