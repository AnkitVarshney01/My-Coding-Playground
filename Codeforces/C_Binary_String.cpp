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

        ln c0 = 0, c1 = 0;
        for (ln i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                c0++;
            else
                c1++;
        }

        ln temp1 = c1, temp0 = 0;

        ln i = 0, j = s.length() - 1;
        ln l1 = 0, r1 = 0;
        while (s[i] != '0' && c0 != 0)
        {
            l1++;
            i++;
        }
        while (s[j] != '0' && c0 != 0)
        {
            r1++;
            j--;
        }

        if (l1 < r1 && c1 - l1 <= c0)
        {
            c1 -= l1;
            j = s.length() - 1;
        }
        else if (r1 < l1 && c1 - r1 <= c0)
        {
            c1 -= r1;
            i = 0;
        }
        else
        {
            i = 0;
            j = s.length() - 1;
        }

        while (temp1 - c1 <= c0 && i <= j)
        {
            // cout << i << " " << j << endl;
            if (s[i] == '0' && s[j] == '0')
            {
                i++;
                j--;
                c0 -= 2;
            }
            else if (s[i] == '0' && s[j] == '1')
            {
                i++;
                c0 -= 1;
            }
            else if (s[i] == '1' && s[j] == '0')
            {
                j--;
                c0 -= 1;
            }
            else if (s[i] == '1' && s[j] == '1')
            {
                if (s[j] == '1' && s[j - 1] == '0' && i <= j - 1)
                {
                    c1 -= 1;
                    j--;
                }
                else if (s[i] == '1' && s[i + 1] == '0' && i + 1 <= j)
                {
                    c1 -= 1;
                    i++;
                }
                else if (c1 - 2 <= c0 && c0 != 0)
                {
                    c1 -= 2;
                    i++;
                    j--;
                }
                else
                    break;
            }
        }

        // cout << i << " " << j << endl;
        for (ln k = i; k <= j; k++)
        {
            if (s[k] == '0')
                temp0++;
        }

        if (temp0 >= temp1 - c1)
            cout << temp0;
        else
            cout << temp1 - c1;
        cout << endl;
    }

    return 0;
}