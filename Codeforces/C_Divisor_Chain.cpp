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
        ln n;
        cin >> n;

        vln ans;
        ans.pb(n);
        ln temp = n;
        ln cnt = 0;
        while (temp)
        {
            temp /= 2;
            cnt++;
        }

        ln p = 1;

        while (cnt > 1)
        {
            if (n & p)
            {
                n -= p;
                ans.pb(n);
            }
            p <<= 1;
            cnt--;
        }

        while (n > 1)
        {
            ans.pb(n / 2);
            n /= 2;
        }
        cout << ans.size() << endl;
        for (auto &i : ans)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}