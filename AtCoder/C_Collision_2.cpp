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

    ln n;
    cin >> n;
    vector<vector<ln>> c(n, vector<ln>(3));
    for (ln i = 0; i < n; i++)
    {
        cin >> c[i][0] >> c[i][1];
        c[i][2] = i;
    }

    string s;
    cin >> s;

    sort(all(c), sortCol0);
    sort(all(c), sortCol1);
    // for (ln i = 0; i < n; i++)
    // {
    //     cout << c[i][0] << " " << c[i][1] << " " << c[i][2] << endl;
    // }

    ln i = 0;
    while (i < n - 1)
    {
        if (c[i][1] == c[i + 1][1])
        {
            if (c[i][0] < c[i + 1][0])
            {
                if (s[c[i][2]] == 'R' && s[c[i + 1][2]] == 'L')
                {
                    cout << "Yes";
                    break;
                }
            }
            else
            {
                if (s[c[i][2]] == 'L' && s[c[i + 1][2]] == 'R')
                {
                    cout << "Yes";
                    break;
                }
            }
        }
        i++;
    }
    if (i == n - 1)
        cout << "No";

    return 0;
}