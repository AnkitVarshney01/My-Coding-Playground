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
        int x, y;
        cin >> x >> y;
        int max = x > y ? x : y;
        int min = x < y ? x : y;
        if (x == 1 && y == 1)
            cout << 2;
        else if (min % 2 == 0 && max % 2 == 0)
            cout << 0;
        else if (min % 2 == 0 || max % 2 == 0)
            cout << 1;
        else
            cout << 2;
        cout << endl;
    }
    return 0;
}