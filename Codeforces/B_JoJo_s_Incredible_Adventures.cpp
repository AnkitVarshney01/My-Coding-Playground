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
        string s;
        cin >> s;

        ln ans = 0;
        ln c1 = 0;
        ln l = 0;
        while (l < s.length())
        {
            if (s[l] == '1')
                c1++;
            l++;
        }

        if (c1 == s.length())
            ans = c1 * c1;
        else if (s.length() == 1)
        {
            if (s == "1")
                ans = 1;
            else
                ans = 0;
        }
        else
        {
            s += s;
            ln n = s.length();

            ln i = 0, c = 0, mx = INT_MIN;

            while (i < n - 1)
            {
                if (s[i] == s[i + 1] && s[i] == '1')
                    c++;
                else
                {
                    if (s[i] == '1')
                        c++;
                    mx = max(mx, c);

                    c = 0;
                }

                i++;
            }
            // cout << mx;

            ln k = 1, j = mx;
            while (k <= j)
            {
                ans = max(ans, k * j);
                k++;
                j--;
            }
        }

        cout << ans;
        cout << endl;
    }

    return 0;
}