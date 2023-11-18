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

bool sortCol0(const vector<ln> &v1, const vector<ln> &v2)
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
        vln a(n), b(n);
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ln i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        ln al = a[0], ar = a[n - 1];
        ln bl = b[0], br = b[n - 1];
        ln alMin = INT_MAX, arMin = INT_MAX, blMin = INT_MAX, brMin = INT_MAX, f = 0;
        vector<vln> Al(n, vln(2)), Ar(n, vln(2)), Bl(n, vln(2)), Br(n, vln(2));

        for (ln i = 0; i < n; i++)
        {
            if (abs(al - b[i]) < alMin)
                alMin = abs(al - b[i]);
            Al[i][0] = abs(al - b[i]);
            Al[i][1] = i;
        }
        sort(all(Al), sortCol0);
        // cout << alMin << endl;

        for (ln i = 0; i < n; i++)
        {
            if (abs(ar - b[i]) < arMin)
                arMin = abs(ar - b[i]);
            Ar[i][0] = abs(ar - b[i]);
            Ar[i][1] = i;
        }
        sort(all(Ar), sortCol0);
        // cout << arMin << endl;

        for (ln i = 0; i < n; i++)
        {
            if (abs(bl - a[i]) < blMin)
                blMin = abs(bl - a[i]);
            Bl[i][0] = abs(bl - a[i]);
            Bl[i][1] = i;
        }
        sort(all(Bl), sortCol0);
        // cout << blMin << endl;

        for (ln i = 0; i < n; i++)
        {
            if (abs(br - a[i]) < brMin)
                brMin = abs(br - a[i]);
            Br[i][0] = abs(br - a[i]);
            Br[i][1] = i;
        }
        sort(all(Br), sortCol0);
        // cout << brMin << endl;

        if (Al[0][1] == 0 && Bl[0][1] == 0)
        {
            if (Al[1][0] < Bl[1][0])
                alMin = Al[1][0];
            else
                blMin = Bl[1][0];
        }

        if (Al[0][1] == n - 1 && Br[0][1] == 0)
        {
            if (Al[1][0] < Br[1][0])
                alMin = Al[1][0];
            else
                brMin = Br[1][0];
        }

        if (Ar[0][1] == 0 && Bl[0][1] == n - 1)
        {
            if (Ar[1][0] < Bl[1][0])
                alMin = Ar[1][0];
            else
                blMin = Bl[1][0];
        }

        if (Ar[0][1] == n - 1 && Br[0][1] == n - 1)
        {
            if (Ar[1][0] < Br[1][0])
                alMin = Ar[1][0];
            else
                brMin = Br[1][0];
        }

        ln minSum1 = alMin + arMin + blMin + brMin;
        ln minSum2 = abs(al - bl) + abs(ar - br);
        ln minSum3 = abs(al - br) + abs(ar - bl);
        minSum1 = min(minSum1, minSum3);
        if (minSum1 < minSum2)
            cout << minSum1;
        else
            cout << minSum2;
        cout << endl;
    }

    return 0;
}