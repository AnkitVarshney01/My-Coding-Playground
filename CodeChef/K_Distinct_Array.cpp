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
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n, k;
        cin >> n >> k;
        vln a(1, 1);
        k -= n;
        ln currEle = 2;
        for (ln i = 2; i <= n; i++)
        {
            if (k < a.size())
            {
                ln val = a[a.size() - k - 1];
                a.pb(val);
                break;
            }
            k -= a.size();
            a.pb(currEle);

            currEle++;
        }
        while (a.size() < n)
        {
            a.pb(a.back());
        }
        for (auto x : a)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}