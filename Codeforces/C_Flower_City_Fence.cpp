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
        vln a(n);
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n == 1 && a[0] == 1)
            cout << "YES";
        else if (a[0] != n)
            cout << "NO";
        else
        {
            vln ans;
            ln j = 0;

            while (j < a[n - 1])
            {
                ans.pb(n);
                j++;
            }

            for (int i = n - 2; i >= 0; i--)
            {
                if (a[i] != a[i + 1])
                {
                    j = 0;
                    while (j < a[i] - a[i + 1])
                    {
                        ans.pb(i + 1);
                        j++;
                    }
                }
            }

            if (ans == a)
                cout << "YES";
            else
                cout << "NO";
        }

        cout << endl;
    }

    return 0;
}