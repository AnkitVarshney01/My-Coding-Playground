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

int max(int a, int b)
{
    return (a > b ? a : b);
}
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        const int N = 100005;
        int maxItem = INT_MIN;
        int lessThank = 0, freq[N] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            maxItem = max(maxItem, arr[i]);
            freq[arr[i]]++;
        }

        int sum = 0, group = 0;

        for (int i = 0; i < maxItem + 1; i++)
        {
            if (freq[i] > k)
                sum += 1;
            else if (freq[i] <= k && freq[i] > 0)
                group += freq[i];
        }
        int sum2 = group / k;
        if (group % k != 0)
        {
            sum2++;
        }

        cout << sum + sum2;
        cout << endl;
    }

    return 0;
}