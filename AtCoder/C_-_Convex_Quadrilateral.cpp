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
    double x[4], y[4];
    for (ln i = 0; i < 4; i++)
    {
        cin >> x[i] >> y[i];
    }

    bool f = 1;

    double m1, m2, m3;
    m1 = (y[1] - y[0]) / (x[1] - x[0]);
    m2 = (y[2] - y[1]) / (x[2] - x[1]);
    m3 = (y[0] - y[2]) / (x[0] - x[2]);

    double s[4][2];
    // c and d for ab
    s[0][0] = m1 * (x[2] - x[0]) - y[2] + y[0]; // c
    s[0][1] = m1 * (x[3] - x[0]) - y[3] + y[0]; // d
    if ((s[0][0] >= 0 && s[0][1] >= 0) || (s[0][0] < 0 && s[0][1] < 0))
        f = 1;
    else
        f = 0;

    if (f == 0)
    {
        cout << "No";
        return 0;
    }

    // a and d for bc
    s[1][0] = m2 * (x[0] - x[1]) - y[0] + y[1]; // a
    s[1][1] = m2 * (x[3] - x[1]) - y[3] + y[1]; // d
    if ((s[1][0] >= 0 && s[1][1] >= 0) || (s[1][0] < 0 && s[1][1] < 0))
        f = 1;
    else
        f = 0;
    if (f == 0)
    {
        cout << "No";
        return 0;
    }

    // b and d for ca
    s[2][0] = m3 * (x[1] - x[2]) - y[1] + y[2]; // b
    s[2][1] = m3 * (x[3] - x[2]) - y[3] + y[2]; // d
    if ((s[2][0] >= 0 && s[2][1] < 0) || (s[2][0] < 0 && s[2][1] >= 0))
        f = 1;
    else
        f = 0;

    if (f)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}