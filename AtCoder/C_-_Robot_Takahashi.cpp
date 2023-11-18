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
    ln n;
    cin >> n;
    string s;
    cin >> s;
    vln a(n);
    for (ln i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vln ad, ch;
    ln sumA = 0, sumC = 0;
    for (ln i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ad.pb(a[i]);
            sumA += a[i];
        }
        else
        {
            ch.pb(a[i]);
            sumC += a[i];
        }
    }

    sort(all(ad));
    sort(all(ch));

    ln i = 0;
    ln adSz = ad.size();
    ln chSz = ch.size();

    ln ans = max(adSz, chSz);

    while (i < ch.size())
    {
        ln ub = upper_bound(all(ad), ch[i]) - ad.begin();
        ans = max(ans, (adSz - ub) + (i + 1));
        i++;
    }
    cout << ans;
    return 0;
}