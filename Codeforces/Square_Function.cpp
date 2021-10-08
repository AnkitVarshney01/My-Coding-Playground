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
    vector<int> squares;
    for (int i = 1; i * i <= 1000000; i++)
    {
        squares.push_back(i * i);
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int x = lower_bound(squares.begin(), squares.end(), a[i] * a[j]) - squares.begin();
                // cout << squares[x] << endl;
                if (squares[x] == (a[i] * a[j]))
                    continue;
                else
                    count++;
            }
        }
        cout << count;
        cout << endl;
    }

    return 0;
}