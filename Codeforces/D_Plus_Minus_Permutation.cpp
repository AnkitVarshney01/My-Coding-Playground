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

long long gcd(long long int a, long long int b)
{
    if (b == 0) 
        return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n, x, y;
        cin >> n >> x >> y;

        ln mx = n / x;
        ln mn = n / y;
        ln lcmXY = lcm(x, y);
        ln common = n / lcmXY;

        ln px = ((n * (n + 1)) / 2) - (((n - mx + common) * (n - mx + common + 1)) / 2);
        ln py = ((mn - common) * (mn - common + 1)) / 2;
        cout << px - py;
        cout << endl;
    }

    return 0;
}