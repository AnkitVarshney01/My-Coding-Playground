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
    ln x, a, d, n;
    cin >> x >> a >> d >> n;

    ln lterm = a + (n - 1) * d;

    if (n == 1)
    {
        if (x >= a)
            cout << x - a;
        else
            cout << a - x;
    }
    else
    {
        if (d >= 0)
        {
            if (lterm <= x)
                cout << x - lterm;
            else if (x <= a)
                cout << a - x;
            else
            {
                ln t = (((x - a) / d) + 1);
                ln X1 = a + (t - 1) * d;
                ln X2 = a + (t * d);
                cout << min(abs(x - X1), abs(X2 - x));
            }
        }
        else
        {
            // cout << lterm << endl;
            if (a <= x)
                cout << x - a;
            else if (x <= lterm)
                cout << abs(lterm - x);
            else
            {
                ln t = (((x - lterm) / (-1 * d)) + 1);
                ln X1 = lterm + (t - 1) * (-1 * d);
                ln X2 = lterm + (t * (-1 * d));
                cout << min(abs(x - X1), abs(X2 - x));
            }
        }
    }

    return 0;
}