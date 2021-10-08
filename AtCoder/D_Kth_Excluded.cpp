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
    uint64_t n, q;
    cin >> n >> q;
    uint64_t a[n];
    uint64_t maxElement = INT_MIN;
    for (uint64_t i = 0; i < n; i++)
    {
        cin >> a[i];
        if (maxElement < a[i])
        {
            maxElement = a[i];
        }
    }
    uint64_t k[q];
    bool check[maxElement + 2] = {0};
    for (uint64_t i = 0; i < n; i++)
    {
        check[a[i]] = 1;
    }

    uint64_t max = INT_MIN;
    for (uint64_t i = 0; i < q; i++)
    {
        cin >> k[i];
        if (max < k[i])
        {
            max = k[i];
        }
    }
    uint64_t ans[max + 1];
    uint64_t j = 0;
    uint64_t i = 1;
    for (; i < maxElement + 2; i++)
    {
        if (check[i] == 0)
            ans[j++] = i;
    }
    for (uint64_t l = j; l < max; l++)
        ans[l] = i++;

    for (uint64_t l = 0; l < q; l++)
    {
        printf("%lld\n", ans[k[l] - 1]);
    }

    return 0;
}