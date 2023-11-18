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
        int l, r, k;
        cin >> l >> r >> k;
        int nodd = 0;
        for (int i = l; i < r + 1; i++)
        {
            if (i % 2 != 0)
                nodd++;
        }

        if (l == r && l == 1)
            cout << "NO";
        else if (l == r && l > 1)
            cout << "YES";
        else if ((l % 2 != 0 && r % 2 != 0) || (l % 2 != 0 && r % 2 == 0) || (l % 2 == 0 && r % 2 != 0))
        {
            nodd = ((r - l) / 2) + 1;
            if (nodd > k)
                cout << "NO";
            else
                cout << "YES";
        }
        else if (l % 2 == 0 && r % 2 == 0)
        {
            nodd = ((r - l) / 2);
            if (nodd > k)
                cout << "NO";
            else
                cout << "YES";
        }

        cout << endl;
    }

    return 0;
}