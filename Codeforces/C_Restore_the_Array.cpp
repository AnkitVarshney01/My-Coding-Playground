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
        vector<int> a(n - 1);
        for (ln i = 0; i < n - 1; i++)
        {
            cin >> a[i];
        }

        bool isInc = false, isDec = false;
        ln incId = -1, decId = -1;

        ln i = 0;
        while (i < n - 2)
        {
            if (a[i] < a[i + 1])
            {
                isInc = true;
                incId = i;
                break;
            }
            i++;
        }

        if (isInc)
        {
            while (i < n - 2)
            {
                while (i < n - 2 && a[i] > a[i + 1])
                {
                    a[i] = a[i + 1];
                    i++;
                }
                i++;
            }

            ln j = 0;
            while (j < incId)
            {
                cout << a[j] << " ";
                j++;
            }
            cout << 0 << " ";
            while (j < n - 1)
            {
                cout << a[j] << " ";
                j++;
            }
        }
        else
        {
            ln j = 0;
            while (j < n - 1)
            {
                cout << a[j] << " ";
                j++;
            }
            cout << 0 << " ";
        }

        cout << endl;
    }

    return 0;
}