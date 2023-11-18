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

        ln i = 1, j = n - 2, c = 2, sumA = a[0], sumB = a[n - 1], ans = 0;
        while (i <= j)
        {
            if (sumA > sumB)
            {
                sumB += a[j];
                j--;
                c++;
            }
            else if (sumA < sumB)
            {
                sumA += a[i];
                i++;
                c++;
            }
            else
            {
                ans = c;

                sumA += a[i];
                c++;
                i++;

                if (i < j)
                {
                    sumB += a[j];
                    c++;
                    j--;
                }
            }
        }
        if (sumA == sumB)
            ans = c;
            
        if (n == 1)
            cout << 0;
        else
            cout << ans;
        cout << endl;
    }

    return 0;
}