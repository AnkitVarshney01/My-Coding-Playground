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
        int n, k;
        cin >> n >> k;
        ln ar[n][k] = {0};
        ln even = 0, odd = 0;
        
        for (int i = 1; i <= n * k; i++)
        {
            if (i % 2 == 0)
                even++;
            else
                odd++;
        }

        if (n == 1 && k == 1)
            cout << "YES" << endl
                 << 1 << endl;
        else if (n == k && n % 2 != 0)
            cout << "NO" << endl;
        else if (odd % k != 0)
            cout << "NO" << endl;
        else
        {
            int l = 1;
            for (int i = 0; i < k; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    ar[j][i] = l;
                    l++;
                }
            }
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < k; j++)
                {
                    cout << ar[i][j] << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}