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
#include <unordered_set>

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

bool isLess(unordered_map<int, int> &mp, ln &x)
{
    for (auto i : mp)
    {
        if (i.ss > 1 && i.ff < x)
            return true;
    }
    return false;
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
        unordered_map<int, int> mp;
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        vln b = a;

        sort(all(a));

        ln mex = 0;
        for (ln i = 0; i < n; i++)
        {
            if (mex == a[i])
                mex++;
        }

        ln nMex = mex + 1;

        ln fId = -1, lId = -1;

        for (ln i = 0; i < n; i++)
        {
            if (b[i] == nMex)
            {
                fId = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (b[i] == nMex)
            {
                lId = i;
                break;
            }
        }

        if (fId == -1)
        {
            bool f = 0, f2 = isLess(mp, mex);
            for (ln i = 0; i < n; i++)
            {
                if (b[i] > nMex || f2)
                {
                    f = 1;
                    break;
                }
            }

            if (f)
                cout << "Yes";
            else
                cout << "No";
        }
        else
        {
            ln i = fId;
            while (i <= lId)
            {
                b[i] = mex;
                i++;
            }

            sort(all(b));

            ln cMex = 0;
            for (ln i = 0; i < n; i++)
            {
                if (cMex == b[i])
                    cMex++;
            }

            // cout << cMex << endl;

            if (cMex == nMex)
                cout << "Yes";
            else
                cout << "No";
        }

        cout << endl;
    }

    return 0;
}