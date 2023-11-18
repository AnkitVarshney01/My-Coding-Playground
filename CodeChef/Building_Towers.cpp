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
        ln x, m;
        cin >> x >> m;

        ln mul = 1;
        ln moves_used = 1;
        while (mul * 2 <= x)
        {
            mul *= 2;
            moves_used++;
        }

        // cout << moves_used << endl;
        ln ans = 0;

        if (x - mul != 0)
            moves_used++;
        if (moves_used == m)
            ans = 1;
        else if (moves_used > m)
            ans = 0;
        else
            ans = m - moves_used + 1;

        cout << ans;
        cout << endl;
    }

    return 0;
}