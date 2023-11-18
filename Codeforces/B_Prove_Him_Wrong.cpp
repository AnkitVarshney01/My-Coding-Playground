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

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n;
        cin >> n;
        vln v;
        ln x = 1, maxV = 1e9, f = 1;
        while (n--)
        {
            if (x <= maxV)
                v.pb(x);
            else
            {
                f = 0;
                break;
            }
            x *= 3;
        }
        if (f == 0)
            cout << "NO";
        else
        {
            cout << "YES";
            cout << endl;
            for (ln i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}