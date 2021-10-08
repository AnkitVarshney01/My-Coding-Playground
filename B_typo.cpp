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
    string s, t;
    cin >> s >> t;
    int i = 0, j = 0;
    if (s.length() != t.length())
        cout << "No";
    else
    {
        while (i < s.length() - 1 && j < t.length() - 1)
        {
            if (s[i] == t[j])
            {
                i++;
                j++;
            }
            else if (s[i + 1] == t[j] && s[i] == t[j + 1])
            {
                i += 2;
                j += 2;
            }
            else
                break;
        }
        if (i == s.length() || s[i] == t[j])
            cout << "Yes";
        else
            cout << "No";
    }

    return 0;
}