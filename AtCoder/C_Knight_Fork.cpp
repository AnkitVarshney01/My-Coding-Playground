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

bool isAns(double x, double y, double x2, double y2)
{
    double xSq = (x - x2) * (x - x2);
    double ySq = (y - y2) * (y - y2);
    if (xSq + ySq == 5)
        return true;
    else
        return false;
}

int main()
{
    fastio();

    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (isAns(x1 + 2, y1 + 1, x2, y2))
        cout << "Yes";
    else if (isAns(x1 + 2, y1 - 1, x2, y2))
        cout << "Yes";
    else if (isAns(x1 - 2, y1 + 1, x2, y2))
        cout << "Yes";
    else if (isAns(x1 - 2, y1 - 1, x2, y2))
        cout << "Yes";
    else if (isAns(x1 + 1, y1 + 2, x2, y2))
        cout << "Yes";
    else if (isAns(x1 + 1, y1 - 2, x2, y2))
        cout << "Yes";
    else if (isAns(x1 - 1, y1 + 2, x2, y2))
        cout << "Yes";
    else if (isAns(x1 - 1, y1 - 2, x2, y2))
        cout << "Yes";
    else
        cout << "No";
        
    return 0;
}