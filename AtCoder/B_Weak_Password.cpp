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

    int n, p = 1000;
    cin >> n;
    int x[4], i = 0;
    while (p)
    {
        x[i++] = n / p;
        n %= p;
        p /= 10;
    }
    if (x[0] == x[1] && x[1] == x[2] && x[2] == x[3])
    {
        cout << "Weak";
        return 0;
    }
    else
    {
        for (i = 0; i < 3; i++)
        {
            if ((x[i] + 1 == x[i + 1]) || (x[i] == 9 && x[i + 1] == 0))
            {
                continue;
            }
            else
            {
                cout << "Strong";
                break;
            }
        }
    }
    if (i == 3)
    {
        cout << "Weak";
    }
    return 0;
}