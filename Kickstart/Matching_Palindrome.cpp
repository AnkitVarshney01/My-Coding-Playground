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
#define gln greater<ln>
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

bool isPal(string s)
{
    string t = s;
    reverse(all(s));
    return s == t;
}

vector<ln> printDivisors(ln n)
{
    vector<ln> fac;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                fac.pb(i);
            else
            {
                fac.pb(i);
                fac.pb(n / i);
            }
        }
    }

    return fac;
}

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    ln tc = 1;
    while (t--)
    {
        string ans = "";
        ln n;
        cin >> n;
        string s;
        cin >> s;

        vln un(n, 0);

        unordered_map<char, ln> mp;
        for (ln i = 0; i < n; i++)
        {
            mp[s[i]]++;
            un[i] = mp.size();
        }

        vector<ln> fac = printDivisors(n);
        sort(all(fac), greater<ln>());

        for (ln i = 0; i < fac.size(); i++)
        {
            string tm = s.substr(0, fac[i]);
            if (un[fac[i] - 1] == mp.size() && isPal(tm))
            {
                bool f = 1;
                for (ln j = 0; j < n - fac[i]; j += fac[i])
                {
                    string t1 = s.substr(j, fac[i]);
                    if (t1 != tm)
                    {
                        f = 0;
                        break;
                    }
                }

                if (f)
                    ans = tm;
            }
        }

        if (ans == "")
            ans = s;
        cout << "Case #" << tc++ << ": " << ans;
        cout << endl;
    }

    return 0;
}