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

ln sieveOfEratosthenes(ln start, ln end)
{
    bool prime[201] = {0};
    ln flag = 0;
    for (ln i = 2; i <= end; i++)
    {
        if (prime[i] == 0)
        {
            for (ln j = i * i; j <= end; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for (ln i = start; i <= end; i++)
    {
        if (prime[i] == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int main()
{
    fastio();

    ln a, b, c, d;
    cin >> a >> b >> c >> d;

    int takReqRange = d - c + 1;
    ln f = 0, i = a;
    for (; i <= b; i++)
    {
        f = sieveOfEratosthenes(i + c, i + d);
        if (f == 0)
        {
            cout << "Takahashi";
            break;
        }
    }
    if (i > b)
        cout << "Aoki";
    return 0;
}