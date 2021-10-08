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
    int q;
    cin >> q;
    multiset<int> balls;
    int addSum = 0;
    while (q--)
    {
        int p;
        cin >> p;
        int x;
        if (p == 3)
        {
            cout << *balls.begin() + addSum << endl;
            balls.erase(balls.begin());
        }
        else if (p == 1)
        {
            cin >> x;
            balls.insert(x - addSum);
        }
        else if (p == 2)
        {
            cin >> x;
            addSum += x;
        }
    }

    return 0;
}