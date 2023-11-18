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
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    map<char, ln> m1, m2, m3;

    for (ln i = 0; i < n; i++)
    {
        m1[s1[i]] = i;
        m2[s2[i]] = i;
        m3[s3[i]] = i;
    }

    ln ans = -1;
    for (auto &i : m1)
    {
        if (i.ss != m2[i.ff] && m2[i.ff] != m3[i.ff])
            ans = min(ans, max({i.ss, m2[i.ff], m3[i.ff]}));
        else if (i.ss == m2[i.ff] && i.ss == m3[i.ff]) {
            ans = min()
        }
    }

    return 0;
}