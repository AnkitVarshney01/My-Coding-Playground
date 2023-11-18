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

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n, cB = 0, cR = 0;
        cin >> n;
        string s, ans = "YES";
        cin >> s;

        s = 'W' + s;
        s += 'W';
        vln Widx;
        map<char, int> mp;
        // cout << s << endl;
        for (ln i = 0; i < s.size(); i++)
        {
            if (s[i] == 'W')
                Widx.pb(i);
            else
                mp[s[i]]++;
        }

        ln j = 0, count = 0;
        for (ln i = 0; i < Widx.size() - 1; i++)
        {
            j = Widx[i] + 1;
            cB = 0, cR = 0, count = 0;
            while (j < Widx[i + 1])
            {
                if (s[j] == 'B')
                    cB++;
                else if (s[j] == 'R')
                    cR++;
                j++;
                count++;
            }
            if (count == 0)
                continue;
            if (cR == 0 || cB == 0)
            {
                ans = "NO";
                break;
            }
        }

        if (Widx.size() == n + 2)
            ans = "YES";

        cout << ans;
        cout << endl;
    }

    return 0;
}