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
    ln n;
    cin >> n;
    vln a(n + 1);
    for (ln i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }

    ln t;
    cin >> t;
    while (t--)
    {
        ln l, r, x, c = 0;
        cin >> l >> r >> x;
        for (ln i = l; i <= r; i++)
        {
            if (a[i] == x)
                c++;
        }
        cout << c;
        cout << endl;
    }

    return 0;
}