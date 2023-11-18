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

bool isPal(int i, int j, string &s)
{
    for (; i < j; i++, j--)
    {
        if (s[i] != s[j])
            return false;
    }

    return true;
}

string f(int i, int j, string &s, map<pair<int, int>, string> &dp)
{
    if (i >= s.length() || j < 0)
        return "";
    if (i == j)
        return s.substr(i, 1);

    if (dp.find({i, j}) != dp.end())
        return dp[{i, j}];

    if (isPal(i, j, s))
        return dp[{i, j}] = s.substr(i, j - i + 1);
    else
    {
        string s1 = f(i + 1, j, s, dp);
        string s2 = f(i, j - 1, s, dp);
        return dp[{i, j}] = s1.length() > s2.length() ? s1 : s2;
    }
}

string longestPalindrome(string s)
{
    int n = s.length();
    map<pair<int, int>, string> dp;
    return f(0, n - 1, s, dp);
}

int main()
{
    fastio();
    string s;
    cin >> s;
    string s1 = longestPalindrome(s);
    cout << s1.length();

    return 0;
}