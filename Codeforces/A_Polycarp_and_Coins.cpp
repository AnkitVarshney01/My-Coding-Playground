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
        if (n % 3 == 0)
        {
            cout << n / 3 << " " << n / 3;
        }
        else if (n % 3 == 1)
        {
            cout << n / 3 + 1 << " " << n / 3;
        }
        else if (n % 3 == 2)
        {
            cout << n / 3 << " " << n / 3 + 1;
        }

        cout << endl;
    }

    return 0;
}