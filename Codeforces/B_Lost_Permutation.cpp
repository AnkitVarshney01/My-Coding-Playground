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
        ln m, s;
        cin >> m >> s;

        vln b(m);
        map<ln, ln> mp;
        for (ln i = 0; i < m; i++)
        {
            cin >> b[i];
            mp[b[i]] = 1;
        }

        ln x = 1;
        while (s > 0)
        {
            while (mp[x] == 1)
                x++;
            s -= x;
            mp[x] = 1;
            b.push_back(x);
            x++;
        }

        sort(all(b));
        if (s == 0)
        {
            x = 1;
            bool f = 1;
            for (ln i = 0; i < b.size(); i++)
            {
                if (b[i] != x)
                {
                    f = 0;
                    break;
                }
                x++;
            }

            if (f)
                cout << "YES";
            else
                cout << "NO";
        }
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}