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
    int n;
    cin >> n;
    int x;
    map<int, int> mp;
    for (int i = 0; i < 4 * n - 1; i++)
    {
        cin >> x;
        mp[x]++;
    }
   
    int ans = 0;
    for (auto i : mp)
    {
        if (i.second == 3)
        {
            ans = i.ff;
            break;
        }
    }
    cout << ans;
    return 0;
}