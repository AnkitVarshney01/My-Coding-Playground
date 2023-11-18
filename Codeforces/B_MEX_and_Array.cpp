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
        vln a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ln sum = 0;
        for (int l = 0; l < n; l++)
        {
            for (int i = n - 1; i >= l; i--)
            {
                vln temp;
                for (int j = l; j <= i; j++)
                {
                    temp.pb(a[j]);
                    if (a[j] == 0)
                        sum++;
                }
                // for (int j = 0; j < temp.size(); j++)
                // {
                //     cout << temp[j] << " ";
                // }
                // cout << endl;
                sum += temp.size();
            }
        }
        cout << sum;
        cout << endl;
    }

    return 0;
}