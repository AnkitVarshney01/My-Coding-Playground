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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> p;
        int i = 0, j = n - 1;
        while (i < j)
        {
            p.push_back({i, j});
            i++, j--;
        }
        i = 0, j = n - 1;
        if (k == 0)
        {
            for (int l = 0; l < p.size(); l++)
            {
                cout << p[l].first << " " << p[l].second << endl;
            }
        }
        else if (k == n - 1)
        {
        }
        else
        {
            int temp = p[0].second;
            if(k<n/2)
            {
                p[0].second= p[p.size()-k]
            }
        }
        cout << endl;
    }

    return 0;
}