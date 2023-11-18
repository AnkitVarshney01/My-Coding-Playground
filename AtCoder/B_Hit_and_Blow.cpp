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

int main()
{
    fastio();

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

    ln sum1 = 0, sum = 0, i = 0, j = 0;
    while (i < n)
    {
        if (a[i] == b[i])
            sum1++;
        i++;
    }
    sort(all(a));
    sort(all(b));
    i = 0;
    while (i < n && j < n)
    {
        if (a[i] == b[j])
        {
            sum++;
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << sum1 << endl
         << sum - sum1;
    return 0;
}