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
    ln count = 1;
    while (t--)
    {
        ln n;
        cin >> n;
        string s;
        cin >> s;

        bool check[5] = {0};
        if (n > 7)
            check[0] = 1;

        ln i = 0;
        while (i < n)
        {
            if (s[i] >= 65 && s[i] <= 90)
                check[1] = 1;
            else if (s[i] >= 97 && s[i] <= 122)
                check[2] = 1;
            else if (s[i] == 35 || s[i] == 38 || s[i] == 42 || s[i] == 64)
                check[4] = 1;
            else if (s[i] >= 48 && s[i] <= 57)
                check[3] = 1;
            i++;
        }
        char big = 'A', small = 'a', num = '0', sc = '@';

        if (check[4] == 0)
            s += sc;
        if (check[3] == 0)
            s += num;
        if (check[2] == 0)
            s += small;
        if (check[1] == 0)
            s += big;

        if (s.length() < 7)
            while (s.length() < 7)
                s += big;

        cout << "Case #" << count++ << ": " << s << endl;
    }

    return 0;
}