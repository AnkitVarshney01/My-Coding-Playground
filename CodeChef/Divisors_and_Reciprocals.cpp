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

#define MOD 1000000007
#define ln long long int
#define pb push_back
#define ss second
#define ff first
#define vi vector<int>
#define gi greater<int>
#define aln(a) a.begin(), a.end()
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
    int t;
    cin >> t;
    while (t--)
    {
        ln x, a, b;
        cin >> x >> a >> b;

        if (x % a == 0)
        {
            ln ans = (x / a) * b;
            ln sum = 0;
            for (int i = 1; i <= sqrtl(ans); i++)
            {

                if (sum > x)
                    break;
                if (ans % i == 0)
                {
                    if (ans / i == i)
                        sum += i;
                    else
                    {
                        sum += i;
                        sum += (ans / i);
                    }
                }
            }

            if (x == sum)
                cout << ans;
            else
                cout << -1;
        }
        else
            cout << -1;
        cout << endl;
    }

    return 0;
}