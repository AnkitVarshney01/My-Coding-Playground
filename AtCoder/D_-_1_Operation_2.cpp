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
    ln n, q;
    cin >> n >> q;

    ln sum = 0;
    vln a(n);
    for (ln i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(all(a));
    
    while (q--)
    {
        ln x;
        cin >> x;
        // if (n * x > sum)
        //     cout << (n * x) - sum << endl;
        // else
        // {
        ln mnMoves = 0;
        for (ln i = 0; i < n; i++)
        {
            mnMoves += (abs(a[i] - x));
        }
        cout << mnMoves << endl;
        // }
    }

    return 0;
}