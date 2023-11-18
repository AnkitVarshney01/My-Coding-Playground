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

        ln c = 0, i = 1;
        ln n = s.length();

        if (n == 1)
        {
            if (s[0] == '^')
                c = 1;
            else
                c = 2;
        }
        else if (n == 2)
        {
            if (s == "^_")
                c = 1;
            else if (s == "__")
                c = 3;
            else if (s == "_^")
                c = 1;
            else if (s == "^^")
                c = 0;
        }
        else
        {
            if (s[0] == '_')
            {
                c++;
            }

            while (i < n)
            {
                if (s[i - 1] == s[i] && s[i] == '_')
                {
                    c++;
                }
                i++;
            }

            if (s[n - 1] == '_')
                c++;
        }

        cout << c;
        cout << endl;
    }

    return 0;
}