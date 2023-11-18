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
        ln n;
        cin >> n;
        vln a(n), b(n);
        ln sumA = 0, sumB = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sumA += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            sumB += b[i];
        }

        ln minm = abs(sumA - sumB);

        ln i = 0, j = 0;
        while (i < n && j < n)
        {
            ln currDiff = a[i] - b[j];
            if (a[i] > b[j])
            {
                ln currMinm = abs((sumA - a[i]) - (sumB - b[j]));
                if (minm > currMinm)
                {
                    ln temp = a[i];
                    a[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        cout << endl;
    }

    return 0;
}