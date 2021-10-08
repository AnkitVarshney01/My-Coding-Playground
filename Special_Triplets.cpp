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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 1; i <= n / 2; i++)
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                count += (n - i) / j + 1;
            }
        }
        cout << count;
        cout << endl;
    }

    return 0;
}

// b=2, c=1, n=6
// 1 2 1
// 3 2 1
// 5 2 1
// A - 1 = 2 * (0 | 1 | 2);


// B=3, C=1
// 1 3 1
// 4 3 1

// A = i * (I + 1);