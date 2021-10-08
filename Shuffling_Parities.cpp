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
#define MOD 1000000007
#define int long long
#define pb push_back
#define ss second
#define ff first
#define vi vector<int>
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
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n, countOdd = 0, countEven = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                countEven++;
            else
                countOdd++;
        }

        if (n % 2 == 0)
        {
            if (countEven == n / 2)
                cout << n;
            else if (countEven > n / 2)
                cout << (n / 2) + countOdd;
            else
                cout << (n / 2) + countEven;
        }
        else
        {
            if (countEven == n / 2)
                cout << n - 1;
            else if (countEven > n / 2)
                cout << (n / 2) + 1 + countOdd;
            else
                cout << (n / 2) + countEven;
        }

        cout << endl;
    }

    return 0;
}