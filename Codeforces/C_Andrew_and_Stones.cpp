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
#include <unordered_map>

#define MOD 1000000007
#define ln long long int
#define pb push_back
#define ss second
#define ff first
#define vln vector<long long int>
#define gi greater<int>
#define all(a) a.begin(), a.end()
#define MAXN 100001
#define BLOCK 555
#define pii pair<int, int>
#define pmq priority_queue<int, vi, gi>
using namespace std;

void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n;
        cin >> n;
        vln a(n);
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ln even = 0, odd = 0, cof1 = 0;
        for (ln i = 1; i < n - 1; i++)
        {
            if (a[i] == 1)
                cof1++;
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        ln sum = 0;
        if ((odd > 1 || even != 0) && cof1 != n - 2)
        {
            for (ln i = 1; i < n - 1; i++)
            {
                sum += (a[i] / 2);
            }
            sum += odd;
            cout << sum;
        }
        else
        {
            cout << -1;
        }
        cout << endl;
    }

    return 0;
}