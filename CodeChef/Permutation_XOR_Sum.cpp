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

int reverse(int n)
{
    int no = 0, cnt = 0;
    while (n)
    {
        if (n % 2 == 0)
            no += (1LL << cnt);
        n /= 2;
        cnt++;
        if (n <= 0)
            break;
    }
    return no;
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
        int sum = 0;
        while (n > 0)
        {
            int x = reverse(n);
            int y = n;
            if ((y & (y + 1)) == 0)
                y--;
            int curr = ((y * (y + 1)) / 2) - ((x * (x - 1)) / 2);
            sum += (curr * 2);
            n = x - 1;
        }
        cout << sum;
        cout << endl;
    }

    return 0;
}