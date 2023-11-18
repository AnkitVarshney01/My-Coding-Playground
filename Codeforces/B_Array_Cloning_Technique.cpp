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

int main()
{
    fastio();
    // vln pow2(17);
    // ln i = 1, p = 2;
    // while (i <= 17)
    // {
    //     pow2.pb(p);
    //     i++;
    //     p *= 2;
    // }

    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n;
        cin >> n;
        vln a(n);
        map<int, int> mp;
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        if (mp[a[0]] == n)
            cout << 0;
        else
        {
            ln maxEle = a[0], max = INT_MIN;
            for (auto i : mp)
            {
                if (i.second > max)
                {
                    max = i.second;
                    maxEle = i.first;
                }
            }
            ln ans = 0;
            ans += (n - max);
            ln i = max > 1 ? max : 1;
            ln copy = 0;
            while (i < n)
            {
                copy++;
                i *= 2;
            }
            cout << ans + copy;
        }
        cout << endl;
    }

    return 0;
}