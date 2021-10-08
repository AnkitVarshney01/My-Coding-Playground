#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <vector>
#include <stdlib.h>
#include <map>
#include <unordered_map>
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

#define int long long
#define MOD 1000000007
#define int long long
#define pb push_back
#define ss second
#define ff first
#define vi vector<int>
#define gi greater<int>
#define all(a) a.begin(), a.end()
#define MAXN 100001
#define BLOCK 555
#define pii pair<int, int>
#define pmq priority_queue<int, vi, gi>
#define mii map<int, int>
#define umii unordered_map<int, int>
#define vpii vector<pair<int, int>>
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vi v(n);
        umii m1, m2;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            m1[v[i]]++;
            if (x != 0)
                m2[(x ^ v[i])]++;
        }

        int total, currMax = INT_MIN, moves;
        for (auto i : m1)
        {
            total = i.ss + m2[i.ff];
            if (currMax < total)
            {
                currMax = total;
                moves = m2[i.ff];
            }
            else if (currMax == total)
            {
                moves = min(moves, m2[i.ff]);
            }
        }
        cout << currMax << " " << moves << endl;
    }
    return 0;
}