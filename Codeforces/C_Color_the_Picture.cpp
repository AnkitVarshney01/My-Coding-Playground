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

bool sortCol(const vector<ln> &v1, const vector<ln> &v2)
{
    return v1[0] < v2[0];
}

int main()
{
    fastio();
    int t = 0;
    cin >> t;
    while (t--)
    {
        ln n, m, k;
        cin >> n >> m >> k;
        vln col(k);
        for (ln i = 0; i < k; i++)
        {
            cin >> col[i];
        }

        sort(all(col), greater<int>());

        bool f = 0, f1 = 0;

        ln sum = 0;
        for (ln i = 0; i < k; i++)
        {
            if (col[i] / m > 2)
                f = 1;
            if (col[i] / m >= 2)
                sum += (col[i] / m);
        }

        ln sum1 = 0;
        for (ln i = 0; i < k; i++)
        {
            if (col[i] / n > 2)
                f1 = 1;
            if (col[i] / n >= 2)
                sum1 += (col[i] / n);
        }

        if (n % 2 == 1 && m % 2 == 1)
        {
            if ((f && sum >= n) || (f1 && sum1 >= m))
                cout << "Yes";
            else
                cout << "No";
        }
        else if (n % 2 == 1)
        {
            if (sum1 >= m || (f && sum >= n))
                cout << "Yes";
            else
                cout << "No";
        }
        else if (m % 2 == 1)
        {
            if (sum >= n || (f1 && sum1 >= m))
                cout << "Yes";
            else
                cout << "No";
        }
        else
        {
            if (sum >= n || sum1 >= m)
                cout << "Yes";
            else
                cout << "No";
        }

        cout << endl;
    }

    return 0;
}