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
    vector<vln> a(n, vln(2));
    for (ln i = 0; i < n; i++)
    {
        for (ln j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    sort(all(a), sortCol);

    vector<pair<ln, ln>> p;
    ln i = 1;
    ln l = a[0][0], r = a[0][1];
    while (i < n)
    {
        ln currL = a[i][0], currR = a[i][1];
        if (currL < r)
        {
            if (currR >= r)
            {
                r = a[i][1];
            }
        }
        else if (currL == r)
        {
            r = currR;
        }
        else
        {
            p.push_back({l, r});
            l = currL;
            r = currR;
        }
        i++;
    }
    p.push_back({l, r});
    for (auto i : p)
    {
        cout << i.first << " " << i.second;
        cout << endl;
    }
    return 0;
}