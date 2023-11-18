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
bool sortCol1(const vector<ln> &v1, const vector<ln> &v2)
{
    return v1[1] < v2[1];
}

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n, m;
        cin >> n >> m;
        vector<vector<ln>> v(m, vector<ln>(3));
        for (ln i = 0; i < m; i++)
        {
            cin >> v[i][0] >> v[i][1];
            v[i][2] = i + 1;
        }
       
        sort(v.begin(), v.end(), sortCol1);
        
        ln sum = 0;
        for (ln i = 0; i < 2 * n; i++)
        {
            sum += v[i][1];
        }
        cout << sum << endl;
        vector<vector<ln>> a(2 * n, vector<ln>(3));
        for (ln i = 0; i < 2 * n; i++)
        {
            a[i][0] = v[i][0];
            a[i][1] = v[i][1];
            a[i][2] = v[i][2];
        }

        sort(a.begin(), a.end(), sortCol0);
        
        for (ln i = 0; i < n; i++)
        {
            cout << a[i][2] << " " << a[2 * n - 1 - i][2] << endl;
        }

        cout << endl;
    }

    return 0;
}