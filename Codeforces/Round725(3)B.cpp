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
        vector<int> a;
        int k;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            a.push_back(k);
        }

        int sum = accumulate(a.begin(), a.end(), 0);
        sort(a.begin(), a.end());
        // cout << sum;
        if(n==1)
        {
            cout<<0;
        }
        else if (sum % n != 0)
        {
            cout << -1;
        }
        else
        {
            int avg = sum / n;
            int idx = upper_bound(a.begin(), a.end(), avg) - a.begin();
            cout << n - idx;
        }

        cout << endl;
    }

    return 0;
}