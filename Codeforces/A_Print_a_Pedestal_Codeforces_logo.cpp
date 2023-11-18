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

bool sortCol(const vector<ln> &v1, const vector<ln> &v2)
{
    return v1[0] < v2[0];
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
        ln h1, h2, h3;
        if (n % 3 == 0)
        {
            h2 = n / 3;
            h1 = (n / 3) + 1;
            h3 = (n / 3) - 1;
        }
        else if (n % 3 == 1)
        {
            h2 = n / 3;
            h1 = (n / 3) + 2;
            h3 = (n / 3) - 1;
        }
        else
        {
            h2 = (n / 3) + 1;
            h1 = (n / 3) + 2;
            h3 = (n / 3) - 1;
        }
        cout << h2 << " " << h1 << " " << h3;
        cout << endl;
    }

    return 0;
}