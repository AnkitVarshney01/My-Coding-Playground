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
    int n;
    cin >> n;
    int a[n];
    map<int, int> m;
    const int N = 1e6 + 2;
    int idx[N];
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
        if (m[a[i]] == 2)
        {
            if (min > i - idx[a[i]])
            {
                min = i - idx[a[i]];
            }
        }
        idx[a[i]] = i;
    }
    if (min == INT_MAX)
        cout << -1;
    else
        cout << min;
    return 0;
}
