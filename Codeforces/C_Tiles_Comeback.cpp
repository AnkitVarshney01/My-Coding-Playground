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
        ln n, k;
        cin >> n >> k;
        vln c(n);
        for (ln i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        if (n == 2)
        {
            if ((k == 2 && c[0] == c[1]) || k == 1)
                cout << "YES";
            else
                cout << "NO";
        }
        else
        {
            int cur = c[0];
            ln len = 0;
            ln idx = 0;
            bool fi = false, ffi = false;
            for (ln i = 0; i < n; i++)
            {
                if (cur == c[i])
                    len++;
                if (len == k)
                {
                    fi = 1;
                    idx = i + 1;
                    break;
                }
            }

            if (idx == n)
                ffi = 1;
            else if (fi && c[0] == c[n - 1])
                ffi = 1;
            else
            {
                cur = c[n - 1];
                len = 0;
                for (int i = n - 1; i >= idx; i--)
                {
                    if (cur == c[i])
                        len++;
                    if (len == k)
                    {
                        ffi = 1;
                        break;
                    }
                }
            }

            if (fi && ffi)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << endl;
    }

    return 0;
}