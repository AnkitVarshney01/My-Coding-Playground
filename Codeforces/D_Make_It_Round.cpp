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
        ln n, m;
        cin >> n >> m;

        ln p = 1, f2 = 0, f5 = 0;
        ln tmp = n;

        while (tmp % 2 == 0)
        {
            f2++;
            tmp /= 2;
        }
        while (tmp % 5 == 0)
        {
            f5++;
            tmp /= 5;
        }

        while (f2 < f5 && p * 2 <= m)
        {
            f2++;
            p *= 2;
        }
        while (f2 > f5 && p * 5 <= m)
        {
            f5++;
            p *= 5;
        }

        while (p * 10 <= m)
            p *= 10;

        ln x = m / p;
        
        cout << n * p * x;

        cout << endl;
    }

    return 0;
}