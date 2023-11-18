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
    ln n, q;
    cin >> n >> q;
    unordered_map<ln, ln> x;
    unordered_map<ln, ln> y;
    set<int> freeX, freeY;
    for (ln i = 1; i < n + 1; i++)
    {
        freeX.insert(i);
        freeY.insert(i);
    }

    while (q--)
    {
        ln t;
        cin >> t;
        if (t == 1)
        {
            ln x1, y1;
            cin >> x1 >> y1;
            x[x1]++;
            y[y1]++;
            freeX.erase(x1);
            freeY.erase(y1);
        }
        else if (t == 2)
        {
            ln x1, y1;
            cin >> x1 >> y1;
            x[x1]--;
            y[y1]--;
            if (x[x1] == 0)
                freeX.insert(x1);
            if (y[y1] == 0)
                freeY.insert(y1);
        }
        else
        {
            ln x1, y1, x2, y2, f = 0;    // freeX -> 1     4 5 6 7 8
            cin >> x1 >> y1 >> x2 >> y2; // freeY -> 1   3   5 6 7 8

            auto i1 = freeX.lower_bound(x1), i2 = freeX.lower_bound(x2);
            auto j1 = freeY.lower_bound(y1), j2 = freeY.lower_bound(y2);

            // Debugging
            // cout << x1 << " " << *i1 << " " << x2 << " " << *i2 << endl;
            // cout << y1 << " " << *j1 << " " << y2 << " " << *j2 << endl;
            // for (auto i = freeX.begin(); i != freeX.end(); i++)
            //     cout << *i << " ";
            // cout << endl;
            // for (auto i = freeY.begin(); i != freeY.end(); i++)
            //     cout << *i << " ";
            // cout << endl;

            if (*i1 == x1 || (*i1 > x1 && *i1 < x2) || *i2 == x2)
            {
                if (*j1 == y1 || (*j1 > y1 && *j1 < y2) || *j2 == y2)
                    cout << "No" << endl;
                else
                    cout << "Yes" << endl;
            }
            else
                cout << "Yes" << endl;
        }
    }

    return 0;
}