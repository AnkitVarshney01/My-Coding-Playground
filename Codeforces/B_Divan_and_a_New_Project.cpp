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

bool sortcol2(const vector<ln> &v1, const vector<ln> &v2)
{
    return v1[1] > v2[1];
}

bool sortcol1(const vector<ln> &v1, const vector<ln> &v2)
{
    return v1[0] < v2[0];
}

int main()
{
    fastio();
    ln t = 0;
    cin >> t;
    while (t--)
    {
        ln n;
        cin >> n;
        vector<vector<ln>> a(n, vector<ln>(3));
        for (ln i = 0; i < n; i++)
        {
            a[i][0] = i + 1;
            cin >> a[i][1];
        }

        sort(a.begin(), a.end(), sortcol2);

        ln i = 0, j = 1;
        while (i < n)
        {
            a[i][2] = j;
            i++;
            if (i < n)
            {
                a[i][2] = (-1 * j);
                i++;
            }
            j++;
        }

        ln sum = 0;
        for (i = 0; i < n; i++)
        {
            sum += (2 * a[i][1] * abs(a[i][2]));
        }

        cout << sum << "\n"
             << 0 << " ";
        sort(a.begin(), a.end(), sortcol1);
        for (i = 0; i < n; i++)
            cout << a[i][2] << " ";

        cout << endl;
    }

    return 0;
}