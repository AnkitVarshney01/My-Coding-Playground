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
        int n, f = -1;
        int max = INT_MIN;
        char ans_ch;
        cin >> n;
        string s;
        unordered_map<char, int> mp;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
            if (mp[s[i]] > n / 2 && n % 2 == 0)
            {
                f = 1;
            }
        }
        sort(s.begin(), s.end());
        // cout << s << 1 << endl;
        if (n % 2 != 0)
            cout << "NO" << endl;
        else
        {
            if (f == 1)
            {
                cout << "NO" << endl;
                continue;
            }
            cout << "YES" << endl;
            int j = n - 1;
            for (int i = 0; i < (n / 2); i++)
            {
                if (s[i] == s[n - 1 - i])
                {
                    // cout << 1 << endl;
                    char t = s[i];
                    s[i] = s[j];
                    s[j] = t;
                    j--;
                }
            }

            for (int i = 0; i < n; i++)
            {
                cout << s[i];
            }

            cout << endl;
        }
    }

    return 0;
}