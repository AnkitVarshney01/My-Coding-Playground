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
    string s, s1, s2;
    cin >> s;
    s1 = s;
    reverse(s1.begin(), s1.end());
    if (s1 == s)
        cout << "Yes";
    else
    {
        int i = 0, j = s.length() - 1, dif = 0;
        while (1)
        {
            if (s[j] != 'a')
                break;
            else if (s[j] == 'a')
            {
                dif++;
                j--;
            }
            if (s[i] == 'a')
            {
                dif--;
                i++;
            }
            // cout << dif << endl;
        }
        reverse(s.begin(), s.end());
        if (dif > 0)
        {
            while (dif > 0)
            {
                s += 'a';
                dif--;
            }

            s2 = s;
            reverse(s2.begin(), s2.end());
            if (s2 == s)
                cout << "Yes";
            else
                cout << "No";
        }
        else
            cout << "No";
    }
    return 0;
}