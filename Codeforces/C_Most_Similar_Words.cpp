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
        ln n, m;
        cin >> n >> m;
        string x;
        vector<vln> s(n, vln(m));
        for (ln i = 0; i < n; i++)
        {
            cin >> x;
            for (ln j = 0; j < m; j++)
            {
                s[i][j] = x[j];
            }
        }
        sort(all(s), sortCol);
        // for (ln i = 0; i < n; i++)
        // {
        //     for (ln j = 0; j < m; j++)
        //     {
        //         cout << s[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        ln diff = INT_MAX, currDiff;

        for (ln i = 0; i < n - 1; i++)
        {
            for (ln j = i + 1; j < n; j++)
            {
                currDiff = 0;
                for (ln k = 0; k < m; k++)
                {
                    currDiff += (abs(s[i][k] - s[j][k]));
                }
                if (currDiff < diff)
                    diff = currDiff;
            }
        }

        cout << diff;

        cout << endl;
    }

    return 0;
}