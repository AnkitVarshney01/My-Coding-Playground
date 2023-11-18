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
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int lit_es = (k / 100) + (k % 100);
        int lit_w = ((100 - k) / 100) + ((100 - k) % 100);
        int i = 2;
        int minm = min(lit_es, lit_w);
        while (i <= minm)
        {
            if (lit_es % i == 0 && lit_w % i == 0)
            {
                lit_es /= i;
                lit_w /= i;
            }
            else
                i++;
        }
        cout << lit_es + lit_w;
        cout << endl;
    }
    return 0;
}