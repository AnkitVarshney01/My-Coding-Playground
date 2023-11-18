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
        vln v(2 * n);
        map<int, int> mp;
        for (ln i = 0; i < 2 * n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(all(v));
        ln j = 0;
        ln flag = 1;
        for (auto i : mp)
        {
            if (j != i.ff)
            {
                // flag = 0;
                break;
            }
            else
            {
                if (i.ss < 2)
                {
                    flag = 0;
                    break;
                }
            }
            j++;
        }

        if (flag == 0)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }

    return 0;
}