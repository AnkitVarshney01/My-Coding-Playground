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
        ln n;
        cin >> n;
        string s;
        cin >> s;

        ln cl = 0, cr = 0, id = 0;
        bool f = 0;

        for (ln i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                cl++;
            else
                cr++;

            if (i < n - 1)
                if (s[i] == 'R' && s[i + 1] == 'L')
                    f = 1;
                else if (s[i] == 'L' && s[i + 1] == 'R')
                    id = i + 1;
        }

        if (cl == n || cr == n)
            cout << -1;
        else
        {
            if (f)
                cout << 0;
            else
                cout << id;
        }

        cout << endl;
    }

    return 0;
}