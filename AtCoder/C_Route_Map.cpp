#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <vector>
#include <stdlib.h>
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
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int32_t main()
{
    fastio();
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        mp[s[i]]++;
    }
    
    string t;

    for (int j = 0; j < m; j++)
    {
        cin >> t;
        mp[t]++;
    }

    for (int k = 0; k < n; k++)
    {
        if (mp[s[k]] >= 2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}