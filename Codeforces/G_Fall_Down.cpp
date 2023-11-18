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
        vector<vln> obIdx(m), cStone(m);
        char g[n + 1][m];
        for (ln i = 0; i < n; i++)
        {
            for (ln j = 0; j < m; j++)
            {
                cin >> g[i][j];
            }
        }
        for (ln i = 0; i < m; i++)
        {
            g[n][i] = 'o';
        }

        // Inititialising Ans Grid
        char ans[n][m];
        for (ln i = 0; i < n; i++)
        {
            for (ln j = 0; j < m; j++)
            {
                ans[i][j] = '.';
            }
        }

        for (ln i = 0; i < n; i++)
        {
            for (ln j = 0; j < m; j++)
            {
                if (g[i][j] == 'o')
                    ans[i][j] = 'o';
            }
        }

        // Generating answer
        ln sum = 0;
        for (ln j = 0; j < m; j++)
        {
            for (ln i = 0; i < n + 1; i++)
            {
                if (g[i][j] == 'o')
                {
                    ln k = i - 1;
                    while (sum > 0)
                    {
                        ans[k--][j] = '*';
                        sum--;
                    }
                }
                if (g[i][j] == '*')
                    sum++;
            }
        }

        for (ln i = 0; i < n; i++)
        {
            for (ln j = 0; j < m; j++)
            {
                cout << ans[i][j];
            }
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}