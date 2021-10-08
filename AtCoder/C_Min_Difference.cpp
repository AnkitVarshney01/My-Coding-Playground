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

#define int long long
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int32_t main()
{
    fastio();

    int n, m;
    cin >> n >> m;
    vector<int> a, b;
    a.resize(n);
    b.resize(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0;

    int minDifference = INT_MAX;
    while (i < n && j < m)
    {
        if (minDifference > abs(a[i] - b[j]))
        {
            minDifference = abs(a[i] - b[j]);
        }
        if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>=b[j])
        {
            j++;
        }
    }
    cout << minDifference;
    return 0;
}