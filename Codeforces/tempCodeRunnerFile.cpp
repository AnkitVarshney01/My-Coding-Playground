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
    string s = "I am using hackerrank to improve programming", t = "am hackerrank to improve";

    string word1 = "", word2 = "";
    vector<string> ans;
    int i = 0, j = 0;
    while (i < s.length() || j < t.length())
    {
        while (i < s.length() && s[i] != ' ')
        {
            word1.push_back(s[i]);
            i++;
        }
        i++;

        if (word2 == "")
        {
            while (j < t.length() && t[j] != ' ')
            {
                word2.push_back(t[j]);
                j++;
            }
            j++;
        }

        if (!word1.empty() && !word2.empty() && word1 == word2)
        {
            word1 = "";
            word2 = "";
        }
        else
        {
            ans.push_back(word1);
            word1 = "";
        }
    }

    for (auto s1 : ans)
        cout << s1 << endl;

    return 0;
}