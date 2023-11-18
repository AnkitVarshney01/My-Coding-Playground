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

bool checkPdr(string s1, string s2)
{
    reverse(all(s1));
    if (s1 == s2)
        return true;
    return false;
}

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        ln hr = (s[0] - '0') * 10 + (s[1] - '0');
        ln min = (s[3] - '0') * 10 + (s[4] - '0');
        ln ans = 0;
        ln x;
        cin >> x;

        if ((min % 10) * 10 + (min / 10) == hr)
            ans++;

        ln tHr = hr, tMin = min;
        while (1)
        {
            min += x;
            hr += (min / 60);
            min %= 60;
            hr %= 24;
            if (hr == tHr && min == tMin)
                break;
            if ((min % 10) * 10 + (min / 10) == hr)
                ans++;
        }
        cout << ans;
        cout << endl;
    }

    return 0;
}