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

ln findP(vln &a, ln x, ln &cnt)
{
    cnt++;
    if (a[x] == 1)
        return 0;

    return findP(a, a[x], cnt);
}

int main()
{
    fastio();
    ln n;
    cin >> n;

    vln a(n + 1);
    for (ln i = 2; i <= n; i++)
    {
        cin >> a[i];
    }

    ln c = 0;

    findP(a, n, c);
    cout << c;

    return 0;
}