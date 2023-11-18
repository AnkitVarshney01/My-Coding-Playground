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

ln gcd(ln a, ln b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ln lcm(ln a, ln b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    fastio();
    ln n, a, b;
    cin >> n >> a >> b;

    ln sum = ((n * (n + 1)) / 2);

    ln sumA = (((n / a) * (a + ((n / a) * a))) / 2);
    ln sumB = (((n / b) * (b + ((n / b) * b))) / 2);

    ln AB = lcm(a, b);
    ln sumAB = (((n / AB) * (AB + ((n / AB) * AB))) / 2);

    cout << sum + sumAB - sumA - sumB;
    return 0;
}