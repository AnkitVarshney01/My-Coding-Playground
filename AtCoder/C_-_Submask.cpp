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
#define ln unsigned long long int
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

void f(int i, ln n)
{
    if (i == -1)
    {
        cout << n << endl;
        return;
    }

    ln bitmask = (ln)1 << i;
    ln bit = (bitmask & n) > 0 ? 1 : 0;
    if (bit == 0)
    {
        f(i - 1, n);
    }
    else
    {
        n = n ^ bitmask;
        f(i - 1, n);
        n = n ^ bitmask;
        f(i - 1, n);
    }

    // if (i == bits.size())
    // {
    //     calAns(bits);
    //     return;
    // }

    // if (bits[i] == 0)
    // {
    //     f(i + 1, bits);
    // }

    // bits[i] = 0;
    // f(i + 1, bits);
    // bits[i] = 1;
    // f(i + 1, bits);
}

// void calAns(vln &bits)
// {

// }

int main()
{
    fastio();
    ln n;
    cin >> n;
    f(60, n);
    // vln bits(64, 0);
    // ln t = n;
    // int i = 0;

    // while (t)
    // {
    //     bits[i++] = t & 1;
    //     t >> 1;
    // }

    // f(i, bits);
    // sort(all(ans));
    // for (ln i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << endl;
    // }

    return 0;
}