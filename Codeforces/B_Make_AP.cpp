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

bool checkB(int a, int b, int c)
{
    int m = ((a + c)) % (2 * b);
    int M = ((a + c)) / (2 * b);
    if (m == 0 && M > 0)
        return true;
    return false;
}

bool checkA(int a, int b, int c)
{
    int m = (2 * b - c) % a;
    int M = (2 * b - c) / a;
    if (m == 0 && M > 0)
        return true;
    return false;
}

bool checkC(int a, int b, int c)
{
    int m = (2 * b - a) % c;
    int M = (2 * b - a) / c;
    if (m == 0 && M > 0)
        return true;
    return false;
}

int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (checkA(a, b, c) || checkB(a, b, c) || checkC(a, b, c))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}