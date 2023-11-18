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
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n;
        cin >> n;
        vln a(n), even, odd;
        for (ln i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even.pb(a[i]);
            else
                odd.pb(a[i]);
        }
        ln i = 1;
        int flag = 0;
        while (i < even.size())
        {
            if (even[i - 1] > even[i])
            {
                flag = 1;
                break;
            }
            i++;
        }
        i = 1;
        while (i < odd.size())
        {
            if (odd[i - 1] > odd[i])
            {
                flag = 1;
                break;
            }
            i++;
        }
        if (flag == 0)
            cout << "Yes";
        else
            cout << "No";

        cout << endl;
    }

    return 0;
}