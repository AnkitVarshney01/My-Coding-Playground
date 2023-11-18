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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), flag(n + 1, 0), left;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= n && flag[a[i]] != 1)
            {
                flag[a[i]] = 1;
            }
            else
                left.push_back(a[i]);
        }

        for (int i = 0; i < left.size(); i++)
        {
            while ((left[i] > n || flag[left[i]] == 1) && left[i] != 0)
            {
                left[i] /= 2;
            }
            flag[left[i]] = 1;
        }

        int j = 1;
        for (; j < flag.size(); j++)
        {
            if (flag[j] != 1)
            {
                cout << "NO";
                break;
            }
        }

        if (j == flag.size())
            cout << "YES";

        cout << endl;
    }

    return 0;
}