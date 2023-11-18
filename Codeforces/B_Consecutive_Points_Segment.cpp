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

        string ans = "YES";
        for (ln i = 0; i < n - 1; i++)
        {
            ln diff = a[i + 1] - a[i];
            if (diff == 3)
            {
                a[i] += 1;
                a[i + 1] -= 1;
            }
            else if (diff == 2)
            {
                if (i != 0)
                    a[i + 1] -= 1;
                else
                    a[i] += 1;
            }
            else if (diff == 1)
            {
                if (i == 0)
                    a[i] += 1;
            }
        }

        for (ln i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
                a[i + 1]++;
            if (a[i] + 1 != a[i + 1])
            {
                ans = "NO";
                break;
            }
        }

        cout << ans;
        cout << endl;
    }

    return 0;
}