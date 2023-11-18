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
        ln n;
        cin >> n;
        if (n == 1)
            cout << 1;
        else if (n == 2)
            cout << -1;
        else
        {
            ln ans[n][n];
            ln i = 1;
            if (n % 2 == 0)
            {
                for (ln k = 0; k < n / 2; k++)
                {
                    for (ln j = 0; j < n; j++)
                    {
                        ans[k][j] = i;
                        i += 2;
                    }
                }
                
                i = 2;
                for (ln k = n / 2; k < n; k++)
                {
                    for (ln j = 0; j < n; j++)
                    {
                        ans[k][j] = i;
                        i += 2;
                    }
                }
            }
            else
            {
                for (ln k = 0; k < n / 2; k++)
                {
                    for (ln j = 0; j < n; j++)
                    {
                        ans[k][j] = i;
                        i += 2;
                    }
                }
                for (ln j = 0; j < (n / 2) + 1; j++)
                {
                    ans[n / 2][j] = i;
                    i += 2;
                }

                i = 2;
                for (ln j = (n / 2) + 1; j < n; j++)
                {
                    ans[n / 2][j] = i;
                    i += 2;
                }

                for (ln k = n / 2 + 1; k < n; k++)
                {
                    for (ln j = 0; j < n; j++)
                    {
                        ans[k][j] = i;
                        i += 2;
                    }
                }
            }

            for (ln k = 0; k < n; k++)
            {
                for (ln j = 0; j < n; j++)
                {
                    cout << ans[k][j] << " ";
                }
                cout << endl;
            }
        }
        cout << endl;
    }

    return 0;
}