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
        string s;
        cin >> s;
        char c;
        cin >> c;
        vln idx;
        ln n = s.length();
        for (ln i = 0; i < n; i++)
        {
            if (s[i] == c)
                idx.pb(i);
        }

        ln flag = 0;
        ln i = 0;
        while (i < idx.size())
        {
            ln x = idx[i] % 2;
            ln y = (n - 1 - idx[i]) % 2;
            if (x == y && x == 0)
            {
                flag = 1;
                break;
            }
            i++;
        }
        if (flag == 0)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }

    return 0;
}