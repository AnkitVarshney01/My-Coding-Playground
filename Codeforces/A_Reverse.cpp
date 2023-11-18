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
        vln a(n), idx(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            idx[a[i]] = i;
        }

        ln j = 1, k = 0;
        while (k < a.size())
        {
            if (j == a[k])
            {
                j++;
            }
            else
                break;
            k++;
        }
        // for (int i = 0; i < idx.size(); i++)
        // {
        //     cout << idx[i] << " ";
        // }
        // cout << endl;

        if (n != 1 && k != n)
        {
            ln revIdx = idx[j];
            reverse(a.begin() + k, a.begin() + revIdx + 1);
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }

    return 0;
}