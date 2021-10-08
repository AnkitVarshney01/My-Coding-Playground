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
    int n, q;
    cin >> n >> q;
    vector<int> a;
    a.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int queries[q];
    for (int i = 0; i < q; i++)
        cin >> queries[i];

    sort(a.begin(), a.end());
    for (int i = 0; i < q; i++)
    {
        int justLess = lower_bound(a.begin(), a.end(), queries[i]) - a.begin() - 1;
        int justAbove = upper_bound(a.begin(), a.end(), queries[i]) - a.begin();
        if (a[justLess + 1] == queries[i] || a[justAbove] == queries[i])
        {
            cout << 0 << endl;
        }
        else if (n % 2 == 0)
        {
            if (justAbove % 2 != 0)
            {
                cout << "NEGATIVE" << endl;
            }
            else
            {
                cout << "POSITIVE" << endl;
            }
        }
        else if (n % 2 != 0)
        {
            if (justAbove % 2 != 0)
            {
                cout << "POSITIVE" << endl;
            }
            else
            {
                cout << "NEGATIVE" << endl;
            }
        }
    }

    return 0;
}