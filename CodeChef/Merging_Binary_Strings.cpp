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

#define int long long
#define MOD 1000000007
#define int long long
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
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int c0[2] = {0};
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '0')
                c0[0]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i] == '0')
                c0[1]++;
        }
        if (c0[0] < c0[1])
        {
            string temp;
            temp = a;
            a = b;
            b = temp;
        }

        vector<char> c;
        int i = 0, j = 0;
        while (i < a.length() && j < b.length())
        {
            if (a[i] == '0' && b[j] == '0')
            {
                c.pb(a[i]);
                c.pb(b[j]);
                i++;
                j++;
            }
            else if (a[i] == '0' && b[j] == '1')
            {
                c.pb(a[i]);
                i++;
            }
            else if (a[i] == '1' && b[j] == '0')
            {
                c.pb(b[j]);
                j++;
            }
            else if (a[i] == '1' && b[j] == '1')
            {
                if (i + 1 < a.length() && a[i + 1] == '0')
                {
                    c.pb(a[i]);
                    i++;
                }
                else if (j + 1 < b.length() && b[j + 1] == '0')
                {
                    c.pb(b[j]);
                    j++;
                }
                else if (i + 1 < a.length() - 1 && a[i + 1] == '1')
                {
                    c.pb(a[i]);
                    i++;
                }
                else if (j + 1 < b.length() - 1 && b[j + 1] == '1')
                {
                    c.pb(b[j]);
                    j++;
                }
                else
                {
                    c.pb(a[i]);
                    c.pb(b[j]);
                    i++;
                    j++;
                }
            }
        }
        while (i < a.length())
        {
            c.pb(a[i]);
            i++;
        }

        while (j < b.length())
        {
            c.pb(b[j]);
            j++;
        }

        int ans = 0;
        for (int k = 0; k < c.size(); k++)
        {
            if (c[k] == '1')
                for (int l = k + 1; l < c.size(); l++)
                {
                    if (c[l] == '0')
                        ans++;
                }
        }
        cout << ans << " ";
        for (int k = 0; k < c.size(); k++)
        {
            cout << c[k];
        }

        cout << endl;
    }

    return 0;
}
