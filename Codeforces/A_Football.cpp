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
    
    string s;
    cin >> s;

    int count0 = 0, count1 = 0, max0 = -1, max1 = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (max0 >= 7)
            break;
        if (s[i] == '0')
            count0++;
        else
            count0 = 0;

        if (max0 < count0)
            max0 = count0;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (max1 >= 7)
            break;
        if (s[i] == '1')
            count1++;
        else
            count1 = 0;

        if (max1 < count1)
            max1 = count1;
    }

    if (max0 >= 7)
    {
        cout << "YES";
    }
    else if (max1 >= 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}