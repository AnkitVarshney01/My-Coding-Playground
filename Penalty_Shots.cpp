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
        int arr[10];
        int team1 = 0, team2 = 0;
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
            if (i % 2 != 0)
            {
                team2 += arr[i];
            }
            else if (i % 2 == 0)
            {
                team1 += arr[i];
            }
        }
        if (team1 > team2)
        {
            cout << 1;
        }
        else if (team2 > team1)
        {
            cout << 2;
        }
        else
        {
            cout << 0;
        }

        cout << endl;
    }

    return 0;
}