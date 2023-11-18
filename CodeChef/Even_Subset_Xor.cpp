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

bool even1(int x)
{
    int count1 = 0;
    while (x)
    {
        if (x % 2 == 1)
            count1++;
        x /= 2;
    }
    if (count1 % 2 == 0)
        return true;
    else
        return false;
}

int32_t main()
{
    fastio();
    vi ans;
    int count = 0;
    int i = 1;
    while (count < 1000)
    {
        if (even1(i))
        {
            ans.pb(i);
            count++;
        }
        i++;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;
}