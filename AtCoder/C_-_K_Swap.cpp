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
    ln n, k;
    cin >> n >> k;

    vln a(n);
    for (ln i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vln temp = a;
    sort(all(temp));

    if (k == 1 || a == temp)
        cout << "Yes";
    else
    {

        ln i = 0;
        while (i < n - k)
        {
            if (temp[i] == a[i])
            {
                i++;
                continue;
            }

            ln j = i + k;
            if (temp[i] != a[i])
            {
                while (a[j] != temp[i] && j < n)
                    j += k;
            }

            if (temp[i] == a[j])
            {
                swap(a[i], a[j]);
            }
            else if (j >= n)
                break;
            i++;
        }

        if (temp == a)
            cout << "Yes";
        else
            cout << "No";
    }

    return 0;
}