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
        string ans = "YES";
        ln n = s.length();
        if (n == 1)
            ans = "NO";
        else if (n == 2 && (s != "aa" && s != "bb"))
            ans = "NO";
        else if (n == 3)
        {
            if (s != "aaa" && s != "bbb")
                ans = "NO";
        }
        else
        {
            for (ln i = 0; i < n - 2; i++)
            {
                if ((s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'a') || (s[i] == 'b' && s[i + 1] == 'a' && s[i + 2] == 'b'))
                {
                    ans = "NO";
                    break;
                }
            }
            if (ans != "NO" && ((s[0] == 'a' && s[1] == 'b') || (s[0] == 'b' && s[1] == 'a') || (s[n - 2] == 'a' && s[n - 1] == 'b') || (s[n - 2] == 'b' && s[n - 1] == 'a')))
                ans = "NO";
        }
        cout << ans;
        cout << endl;
    }

    return 0;
}