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

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln maxB = -1, maxAr = 0;
        ln w, h;
        cin >> w >> h;

        ln k;
        cin >> k;
        ln x1[k];
        for (int i = 0; i < k; i++)
        {
            cin >> x1[i];
            if (i == k - 1)
            {
                maxB = x1[k - 1] - x1[0];
                maxAr = maxB * h;
            }
        }

        cin >> k;
        ln x2[k];
        for (int i = 0; i < k; i++)
        {
            cin >> x2[i];
            if (i == k - 1)
            {
                maxB = x2[k - 1] - x2[0];
                if (maxAr < h * maxB)
                    maxAr = maxB * h;
            }
        }

        cin >> k;
        ln y1[k];
        for (int i = 0; i < k; i++)
        {
            cin >> y1[i];
            if (i == k - 1)
            {
                maxB = y1[k - 1] - y1[0];
                if (maxAr < w * maxB)
                    maxAr = maxB * w;
            }
        }

        cin >> k;
        ln y2[k];
        for (int i = 0; i < k; i++)
        {
            cin >> y2[i];
            if (i == k - 1)
            {
                maxB = y2[k - 1] - y2[0];
                if (maxAr < w * maxB)
                    maxAr = maxB * w;
            }
        }
        cout << maxAr;
        cout << endl;
    }

    return 0;
}