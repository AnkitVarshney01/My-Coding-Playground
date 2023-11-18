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
        if (n % 2 != 0 || n == 2)
            cout << -1;
        else
        {
            ln maxm = 1, minm = 1;

            if (n % 6 == 0 && n % 4 == 0)
                cout << n / 6 << " " << n / 4;
            else if (n % 6 != 0 && n % 4 == 0)
            {
                maxm = n / 4;
                ln i = n / 6;
                if (n % 6 == 4)
                    minm = i + 1;
                else
                    minm = (i - 1) + 2;

                cout << minm << " " << maxm;
            }
            else if (n % 6 == 0 && n % 4 != 0)
            {
                minm = n / 6;
                ln i = n / 4;
                maxm = (i - 1) + 1;
                cout << minm << " " << maxm;
            }
            else
            {
                ln tempN = n;
                ln i = n / 6;
                if (n % 6 == 4)
                {
                    minm = (n / 6) + 1;
                }
                else
                {
                    n -= ((i - 1) * 6);
                    minm = (i - 1) + (n / 4);
                }
                maxm = ((tempN / 4) - 1) + 1;
                cout << minm << " " << maxm;
            }
        }
        cout << endl;
    }

    return 0;
}