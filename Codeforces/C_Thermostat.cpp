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
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln l, r, x;
        cin >> l >> r >> x;
        ln a, b;
        cin >> a >> b;

        if (a == b)
            cout << 0;
        else if (a < b)
        {
            if (a + x == b)
                cout << 1;
            else if (a + x < b)
                cout << 1;
            else
            {
                if (b + x <= r || a - l >= x)
                    cout << 2;
                else
                {
                    if (b - l >= x && r - l >= x && r - a >= x)
                        cout << 3;
                    else
                        cout << -1;
                }
            }
        }
        else
        {
            if (a - x == b)
                cout << 1;
            else if (a - x > b)
                cout << 1;
            else
            {
                if (a + x <= r || b - l >= x)
                    cout << 2;
                else
                {
                    if (a - l >= x && r - l >= x && r - b >= x)
                        cout << 3;
                    else
                        cout << -1;
                }
            }
        }
        cout << endl;
    }

    return 0;
}