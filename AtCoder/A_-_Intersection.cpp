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
    ln l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int n = max(r1, r2);
    vln ans(n + 1, 0);

    for (ln i = l1; i <= r1; i++)
    {
        ans[i]++;
    }

    int c = 0;

    for (ln i = l2; i <= r2; i++)
    {
        ans[i]++;
        if (ans[i] == 2)
            c++;
    }

    if (c)
        cout << c - 1;
    else
        cout << 0;

    return 0;
}