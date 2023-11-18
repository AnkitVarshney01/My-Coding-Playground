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
#include <cstring>

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

    ln n, q;
    cin >> n >> q;
    vln a(n);
    ln sum = 0;
    for (ln i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    ln prevX = -1;
    map<int, int> mp;

    while (q--)
    {
        ln t, i, x;
        cin >> t;
        if (t == 1)
        {
            cin >> i >> x;

            if (prevX == -1)
                sum -= (a[i - 1] - x);
            else if (mp[i] >= 1)
                sum -= (a[i - 1] - x);
            else
                sum -= (prevX - x);

            cout << sum;

            a[i - 1] = x;
            mp[i]++;
        }
        else
        {
            cin >> x;
            sum = x * n;

            cout<<sum;
            
            prevX = x;
            mp.clear();
        }
        cout << endl;
    }

    return 0;
}