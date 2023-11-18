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
        string s;
        cin >> s;
        int c1 = 0, c0 = 0;
        int i = 0;
        if (s.length() == 1 || s.length() == 2)
            cout << 0;
        else
        {
            while (i < s.length())
            {

                if (s[i] == '0')
                    c0++;
                else
                    c1++;

                i++;
                // cout << c0 << " " << c1;
            }
            if (c0 > c1)
                cout << c1;
            else if (c0 < c1)
                cout << c0;
            else if (c1 == c0 && c1 != 0)
                cout << c1 - 1;
            else
                cout << 0;
        }
        cout << endl;
    }

    return 0;
}