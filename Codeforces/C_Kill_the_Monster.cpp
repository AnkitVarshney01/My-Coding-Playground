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

#define MOD 1000000007
#define int long long
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

// if something is to be calculated (possibly moves)
// then instead of if-else and modulo operator this function can be used
int countM(int h, int d)
{
    return (h + d - 1) / d; 
}

int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int hc, dc, hm, dm;
        cin >> hc >> dc;
        cin >> hm >> dm;

        int k, w, a;
        cin >> k >> w >> a;
        int tk = k;

        int movesP, movesM;
        while (tk >= 0)
        {
            int h = hc + (tk * a);
            int d = dc + ((k - tk) * w);

            if (countM(hm, d) <= countM(h, dm))
            {
                cout << "YES";
                break;
            }
            tk--;
        }
        if (tk < 0)
            cout << "NO";

        cout << endl;
    }

    return 0;
}