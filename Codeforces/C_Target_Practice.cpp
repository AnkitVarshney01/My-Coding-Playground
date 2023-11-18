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

ln cal(ln i, ln j)
{
    ln ans = 0;
    if (i == 0 || i == 9 || j == 0 || j == 9)
        return 1;
    else if (i == 1 || i == 8 || j == 1 || j == 8)
        return 2;
    else if (i == 2 || i == 7 || j == 2 || j == 7)
        return 3;
    else if (i == 3 || i == 6 || j == 3 || j == 6)
        return 4;
    else if (i == 4 || i == 5 || j == 4 || j == 5)
        return 5;
}

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n = 10;
        vector<vector<char>> a(n, vector<char>(n, '.'));
        ln pts = 0;
        for (ln i = 0; i < 10; i++)
        {
            for (ln j = 0; j < 10; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'X')
                    pts += cal(i, j);
            }
        }

        cout << pts;
        cout << endl;
    }

    return 0;
}