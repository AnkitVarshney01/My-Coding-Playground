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
        vln a(n);
        map<int, vln> mp;
        map<int, int> fr;
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]].pb(i);
            fr[a[i]]++;
        }

        bool f = 0;
        for (auto i : fr)
        {
            if (i.second < 2)
            {
                f = 1;
                break;
            }
        }
        
        if (f)
            cout << -1;
        else
        {
            for (auto i : mp)
            {
                ln temp = i.ss[i.ss.size() - 1];
                for (ln j = i.ss.size() - 1; j > 0; j--)
                {
                    i.ss[j] = i.ss[j - 1];
                }
                i.ss[0] = temp;
                for (ln j = 0; j < i.ss.size(); j++)
                {
                    cout << i.ss[j] + 1 << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}