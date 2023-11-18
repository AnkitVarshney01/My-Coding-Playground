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

int n, m;

void printAns(int i, int len, vln cur)
{
    if (len == n + 1)
    {
        for (int k = 0; k < cur.size(); k++)
        {
            cout << cur[k] << " ";
        }
        cout << endl;

        return;
    }

    for (ln j = i; j <= m; j++)
    {
        cur.push_back(j);
        printAns(j + 1, len + 1, cur);
        if (len == n + 1)
            return;
        cur.pop_back();
    }
}

int main()
{
    fastio();

    cin >> n >> m;
    // cout << n << " " << m << endl;
    vln cur;
    printAns(1, 1, cur);

    return 0;
}
