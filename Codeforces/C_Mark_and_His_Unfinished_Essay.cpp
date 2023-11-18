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
        ln n, c, q;
        cin >> n >> c >> q;
        string s;
        cin >> s;

        vln newN;
        newN.pb(n);
        vector<vln> cop(c, vln(2));
        vector<string> cs;
        for (ln i = 0; i < c; i++)
        {
            cin >> cop[i][0] >> cop[i][1];
            ln cur = cop[i][1] - cop[i][0] + 1 + newN.back();
            // cs.pb(s.substr())
            newN.pb(cur);   
        }


        while (q--)
        {
            ln k;
            cin >> k;
            ln lb = lower_bound(all(newN), k) - newN.begin();
            
        }

        cout << endl;
    }

    return 0;
}