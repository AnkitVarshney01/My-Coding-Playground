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
        ln n, al, y;
        cin >> n >> al >> y;
        vln a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ln bob = al + 3;
        // if (n == 1)
        // {
        //     if (al + a[0] == y || al ^ a[0] == y)
        //         cout << "Alice";
        //     else
        //         cout << "Bob";
        // }
        // else
        // {
            ln odd = 0, even = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                    even++;
                else
                    odd++;
            }

            if (al % 2 == 0 && y % 2 == 0)
            {
                if (odd % 2 == 0)
                    cout << "Alice";
                else
                    cout << "Bob";
            }
            else if (al % 2 != 0 && y % 2 != 0)
            {
                if (odd % 2 == 0)
                    cout << "Alice";
                else
                    cout << "Bob";
            }
            else if (al % 2 != 0 && y % 2 == 0)
            {
                if (odd % 2 != 0)
                    cout << "Alice";
                else
                    cout << "Bob";
            }
            else if (al % 2 == 0 && y % 2 != 0)
            {
                if (odd % 2 != 0)
                    cout << "Alice";
                else
                    cout << "Bob";
            }
        // }
        cout << endl;
    }

    return 0;
}