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

bool sortCol1(const vector<int> &v1, const vector<int> &v2)
{
    return v1[0] < v2[0];
}

bool sortCol3(const vector<int> &v1, const vector<int> &v2)
{
    return v1[2] < v2[2];
}

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n, c_0 = 0;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(3));
        for (int i = 0; i < n; i++)
        {
            cin >> v[i][0];
        }
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            v[i][1] = s[i] - '0';
            v[i][2] = i;
            if (s[i] - '0' == 0)
            {
                c_0++;
            }
        }
        sort(v.begin(), v.end(), sortCol1);

        int i = 1, j = c_0 + 1, k = 0;
        while (j <= n || i <= c_0)
        {
            if (v[k][1] == 0)
            {
                v[k][0] = i;
                i++;
            }
            else
            {
                v[k][0] = j;
                j++;
            }
            k++;
        }
        sort(v.begin(), v.end(), sortCol3);

        for (int l = 0; l < n; l++)
        {
            cout << v[l][0] << " ";
        }

        cout << endl;
    }

    return 0;
}