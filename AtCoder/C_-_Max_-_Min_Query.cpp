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
    int q;
    cin >> q;
    multiset<ln> balls;
    map<ln, ln> mp;
    int addSum = 0;
    while (q--)
    {
        int p;
        cin >> p;
        int x;
        if (p == 3)
        {
            cout << *balls.rbegin() - *balls.begin() << endl;
        }
        else if (p == 1)
        {
            cin >> x;
            mp[x]++;
            balls.insert(x);
        }
        else if (p == 2)
        {
            ln c;
            cin >> x >> c;
            ln minm = min(c, mp[x]);
            mp[x] -= minm;
            if (mp[x] == 0)
                balls.erase(x);
        }
    }

    return 0;
}