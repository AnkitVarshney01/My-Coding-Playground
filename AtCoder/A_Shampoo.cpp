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
    ln t;
    cin >> t;
    vln v(3);
    for (ln i = 0; i < 3; i++)
    {
        cin >> v[i];
    }

    ln i = 0;
    while (t >= 0)
    {
        t -= v[i % 3];
        if (t < 0)
            if (i % 3 == 0)
            {
                cout << "F";
                break;
            }
            else if (i % 3 == 1)
            {
                cout << "M";
                break;
            }
            else if (i % 3 == 2)
            {
                cout << "T";
                break;
            }
        i++;
    }

    return 0;
}