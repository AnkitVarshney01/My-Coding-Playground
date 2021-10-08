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
        string s;
        cin >> s;
        int sum = 0;
        map<int, int> c;
        for (int i = 0; i < s.length(); i++)
        {
            int ch = s[i];
            c[ch - 97]++;
        }
        for (auto i : c)
        {
            if (i.second >= 2)
            {
                sum += 2;
            }
            else if (i.second == 1)
            {
                sum++;
            }
        }
        if (sum == 1)
            cout << 0;
        else
            cout << sum / 2;

        cout << endl;
    }

    return 0;
}