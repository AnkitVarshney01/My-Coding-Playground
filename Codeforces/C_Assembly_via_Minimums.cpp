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
        ln m = (n * (n - 1)) / 2;
        vln b(m);
        map<ln, ln> mp;
        for (ln i = 0; i < m; i++)
        {
            cin >> b[i];
            mp[b[i]]++;
        }

        sort(all(b));

        if (n == 2)
            cout << b[0] << " " << b[0];
        else
        {
            vln ans(n);
            ln j = 0;
            for (auto &i : mp)
            {
                while (i.ss > 0)
                {
                    i.ss -= (n - j - 1);
                    ans[j++] = i.ff;
                }
            }
            ans[j] = 1e9;

            for (ln i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}