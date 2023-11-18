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
        vln a(n - 1);
        for (ln i = 0; i < n - 1; i++)
        {
            cin >> a[i];
        }

        vln fr(n + 1, 0);
        ln sum = 0;
        bool f = true;

        if (a[0] <= n)
            fr[a[0]]++;
        else
            sum = a[0];

        for (ln i = 1; i < n - 1; i++)
        {
            if (a[i] - a[i - 1] <= n)
            {
                if (fr[a[i] - a[i - 1]] == 0)
                    fr[a[i] - a[i - 1]]++;
                else
                {
                    f = false;
                    break;
                }
            }
            else
            {
                if (sum == 0)
                    sum = a[i] - a[i - 1];
                else
                {
                    f = false;
                    break;
                }
            }
        }

        if (sum == 0)
        {
            sum = ((n * (n + 1)) / 2) - a[n - 2];
        }

        if (f)
        {
            // cout << sum << endl;
            // for (ln i = 1; i < n + 1; i++)
            // {
            //     cout << fr[i] << " ";
            // }

            ln nSum = 0, c = 0;
            for (ln i = 1; i < n + 1; i++)
            {
                if (fr[i] == 0)
                {
                    nSum += i;
                    c++;
                }
            }

            if (nSum == sum)
                cout << "YES";
            else
                cout << "NO";
        }
        else
            cout << "NO";

        

        cout << endl;
    }

    return 0;
}