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
        vector<int> a(3);

        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }

        int d, e;
        cin >> d >> e;

        if (a[0] + a[1] <= d && a[2] <= e)
            cout << "YES";
        else if (a[0] + a[2] <= d && a[1] <= e)
            cout << "YES";
        else if (a[1] + a[2] <= d && a[0] <= e)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}