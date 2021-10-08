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
// #include <bits/stdc++.h>

#define int long long
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[0] > v2[0];
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    a %= b;
    return gcd(b, a);
}

int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> oper(m, vector<int>(2));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> oper[i][j];
            }
        }

        sort(oper.begin(), oper.end(), sortcol);

        // for (int i = 0; i < m; i++)
        // {
        //     cout << oper[i][0] << " " << oper[i][1] << endl;
        // }

        int j = 1;
        int sum = 0;
        int a, b;
        if (m == 1)
        {
            int notFill = n / oper[0][1];
            sum += (oper[0][0] * (n - notFill));
            cout << sum;
            cout << endl;
            continue;
        }
        a = oper[0][1];
        b = oper[1][1];
        int notFill = n / oper[0][1];
        sum += (oper[0][0] * (n - notFill));
        while (j < m)
        {
            int lcm = (a * b) / gcd(a, b);
            int remaining = (n / lcm);
            sum += (oper[j][0] * (notFill - remaining));
            if (notFill - remaining != 0)
                notFill = remaining;
            j++;
            if (j < m)
            {
                a = lcm;
                b = oper[j][1];
            }
        }
        cout << sum << endl;
    }

    return 0;
}
