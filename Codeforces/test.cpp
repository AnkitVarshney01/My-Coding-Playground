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

bool sortCol(const pair<int, pair<int, int>> &v1, const pair<int, pair<int, int>> &v2)
{
    if (v1.second.second == v2.second.second)
        return v1.second.first < v2.second.first;

    return v1.second.second > v2.second.second;
}

vector<int> funcBouquet(vector<int> flowerStick, int random)
{
    vector<int> ans;

    priority_queue<int, vector<int>, greater<int>> p;
    for (int i = 0; i < random; i++)
        p.push(flowerStick[i]);

    while (!p.empty())
    {
        ans.push_back(p.top());
        p.pop();
    }

    priority_queue<int> q;
    for (int i = random; i < flowerStick.size(); i++)
        q.push(flowerStick[i]);

    while (!q.empty())
    {
        ans.push_back(q.top());
        q.pop();
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    string s;
    cin >> s;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j > n)
                break;

            if (i == 1 || (i == 2 && s[j] == s[j + i - 1]) || (dp[j + 1][j + i - 2] == 1 && s[j] == s[j + i - 1]))
                dp[j][j + i - 1] = 1;
        }
    }

    vector<long long> ans(n, 0);

    long long res = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (dp[0][i] == 1 && i >= k - 1)
            ans[i] = 1;

        if (i > 0)
            ans[i] = max(ans[i], ans[i - 1]);

        for (int j = 0; j < i - k + 1; j++)
        {
            if (dp[j + 1][i] == 1)
                ans[i] = max(ans[i], ans[j] + 1);
        }

        res = max(ans[i], res);
    }

    cout << res;

    return 0;
}